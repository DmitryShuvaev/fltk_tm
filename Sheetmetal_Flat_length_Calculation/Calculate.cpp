#include "Calculate.h"

Calculate::Calculate()
{
    //ctor
}
void Calculate::add(double BA)
{
BA_v.push_back(BA);
LastOne = BA_v.back();
}
void Calculate::add_LL(double LL)
{
LL_v.push_back(LL);
LastOne = LL_v.back();
}
double Calculate::BA_cal(double A,double R,double K,double T)
{
   double BA=A*(M_PI/180)*(R+(K*T));
   return BA;
}
double Calculate::sum(const vector<double>&v)
{
 double sum=0;
    for(double BA: v)
    {
      sum+=BA;
    }
 return sum;
}
double Calculate::cal_LL(double L,double A,double R,double T,int r_side_1_or_2)
{
  double angle_in_radians = (A/2.) * (M_PI / 180.0); // Convert degrees to radians
  double tangent_A = std::tan(angle_in_radians);
  double res=0;
  if(r_side_1_or_2==0)
  {
   res=L- tangent_A*(R+T);
  }else res=L- (2*(tangent_A*(R+T)));
  return res;
}/*********************************************/
double Calculate::cal_tan(double A,double R,double T)
{
   double angle_in_radians = (A/2.) * (M_PI / 180.0); // Convert degrees to radians
  double tangent_A = std::tan(angle_in_radians);
  return tangent_A*(R+T);;
}
string Calculate::sum_v(const vector<double>&v)
{
string sum;
int v_size=v.size();
    for(int i=0;i<v_size;i++)
    {
      sum+=remove_trailing_zeroes(to_string(v[i]));

      if(i!=v_size - 1)
      sum+="+";
    }
    return sum;
}
string Calculate::LLBA_(string LL,string BA)
{
  string sum;
   sum=LL;
   if (!LL.empty()&&!BA.empty()){
    if (LL.find("+") != std::string::npos)
    {
     sum+=")+(";
     //Inserting a string at the beginning
    sum.insert(0, "(");
    BA+=")";
    }
    else
    {
        sum+="+";
        if (BA.find("+") != std::string::npos)
        {
         BA.insert(0, "(");
         BA+=")";
        }
    }

   }
   sum+=BA;
   return sum;
}
string Calculate::remove_trailing_zeroes(string str)
{
     // Ensure that there is a decimal point somewhere (there should be)
    if(str.find('.') != std::string::npos)
    {
        // Remove trailing zeroes
        str = str.substr(0, str.find_last_not_of('0')+1);
        // If the decimal point is now the last character, remove that as well
        if(str.find('.') == str.size()-1)
        {
            str = str.substr(0, str.size()-1);
        }
    }
    return str;
}
//
void Calculate::setK()
{
  if(radiusv==0)
  {
       if(materialv==0)
       {
         K=0.33;

       }
       else if(materialv==1)
       {
        K=0.38;
       }
       else if(materialv==2)
       {
        K=0.4;

       }

  }
  else if(radiusv==1)
  {
       if(materialv==0)
       {
         K=0.4;

       }
       else if(materialv==1)
       {
        K=0.43;
       }
       else if(materialv==2)
       {
        K=0.45;
        //cout<<K<<endl;
       }
  }
    else if(radiusv==2)
  {
       if(materialv==0)
       {
         K=0.5;

       }
       else if(materialv==1)
       {
        K=0.5;
       }
       else if(materialv==2)
       {
        K=0.5;
//        cout<<K<<endl;
       }
  }
    else if(radiusv==3)
  {
       if(materialv==0)
       {
         K=0.42;

       }
       else if(materialv==1)
       {
        K=0.44;
       }
       else if(materialv==2)
       {
        K=0.46;
//        cout<<K<<endl;
       }
  }
    else if(radiusv==4)
  {
       if(materialv==0)
       {
         K=0.46;

       }
       else if(materialv==1)
       {
        K=0.47;
       }
       else if(materialv==2)
       {
        K=0.48;
//        cout<<K<<endl;
       }
  }
    else if(radiusv==5)
  {
       if(materialv==0)
       {
         K=0.5;

       }
       else if(materialv==1)
       {
        K=0.5;
       }
       else if(materialv==2)
       {
        K=0.5;
//        cout<<K<<endl;
       }
  }
    else if(radiusv==6)
  {
       if(materialv==0)
       {
         K=0.38;

       }
       else if(materialv==1)
       {
        K=0.41;
       }
       else if(materialv==2)
       {
        K=0.44;
//        cout<<K<<endl;
       }
  }
    else if(radiusv==7)
  {
       if(materialv==0)
       {
         K=0.44;

       }
       else if(materialv==1)
       {
        K=0.46;
       }
       else if(materialv==2)
       {
        K=0.47;
//        cout<<K<<endl;
       }
  }
    else if(radiusv==8)
  {
       if(materialv==0)
       {
         K=0.5;

       }
       else if(materialv==1)
       {
        K=0.5;
       }
       else if(materialv==2)
       {
        K=0.5;
//        cout<<K<<endl;
       }
  }
}
void Calculate::reset_BA_LL()
{
BA_v.clear();
LL_v.clear();
}
void Calculate::remove_from_vector_value(vector<double>&v)
{
        // Removing  from vector v
auto it = std::find(v.begin(), v.end(), LastOne);
    if(it != v.end())
    v.erase(it);
}
Calculate::~Calculate()
{
    //dtor
}
