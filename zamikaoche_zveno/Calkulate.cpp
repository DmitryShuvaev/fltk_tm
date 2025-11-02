#include "Calkulate.h"

Calkulate::Calkulate()
{
    //ctor
}

Calkulate::~Calkulate()
{
    //dtor
}
Mesures_values Calkulate::end_chain()
{
Mesures_values v;
v.low=low_value_of_end_link();v.top=top_value_of_end_link();v.nom=0;
return v;
}
double Calkulate::sum_of_top_values_encr_links()
{
    double sum=0;
    for(Mesures_values i: incr_values)
    {
      sum+=i.top;
    }
    //cout<<sum<<endl;
  return sum;
}
double Calkulate::sum_of_low_values_decrising_links()
{
    double sum=0;
    for(Mesures_values i: decr_values)
    {
      sum+=i.low;
    }
    //cout<<sum<<endl;
  return sum;
}
double Calkulate::sum_of_low_values_encr_links()
{
     double sum=0;
    for(Mesures_values i: incr_values)
    {
      sum+=i.low;
    }
    //cout<<sum<<endl;
  return sum;
}
double Calkulate::sum_of_top_values_decr_links()
{
     double sum=0;
    for(Mesures_values i: decr_values)
    {
      sum+=i.top;
    }
    //cout<<sum<<endl;
  return sum;
}
double Calkulate::top_value_of_end_link()
{
    double v=sum_of_top_values_encr_links()-sum_of_low_values_decrising_links();
    //cout<<v<<endl;
    return v;

}
double Calkulate::low_value_of_end_link()
{
   double v=sum_of_low_values_encr_links()- sum_of_top_values_decr_links();
    //cout<<v<<endl;
    return v;
}
