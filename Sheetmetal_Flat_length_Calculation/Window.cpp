#include "Window.h"

Window::Window(int x,int y,int width, int height, char* title)
         : Fl_Double_Window(x,y,width, height, title)
{

//color(FL_WHITE);
materialchoice=new Fl_Choice(200,100,120,25,"Material");
materialchoice->add("Aluminum soft materials");
materialchoice->add("Aluminum medium materials");
materialchoice->add("Steel hard materials");
materialchoice->value(0);//set default celected first
materialchoice->callback(choice_callback,this);
cl.materialv=materialchoice->value();
//
radiuschoice=new Fl_Choice(430,100,120,25,"Radius");
radiuschoice->add("Air bending 0 to thikness");
radiuschoice->add("Air bending thickness to 3x thickness");
radiuschoice->add("Air bending greater than 3x thickness");
radiuschoice->add("Bottoming 0 to thikness");
radiuschoice->add("Bottoming thickness to 3x thickness");
radiuschoice->add("Bottoming greater than 3x thickness");
radiuschoice->add("Coining 0 to thikness");
radiuschoice->add("Coining thickness to 3x thickness");
radiuschoice->add("Coining greater than 3x thickness");
radiuschoice->value(0);
radiuschoice->callback(choice_callback,this);
cl.radiusv=radiuschoice->value();
//
radius_in_both_or_one_side=new Fl_Choice(200,130,120,25,"For cal LL");
radius_in_both_or_one_side->add("R in 1 side");
radius_in_both_or_one_side->add("R in 2 sides");
radius_in_both_or_one_side->value(0);
image_box=new ResizableImageBox(0, 220, this->w(), 300, 0, "fli.jpg");
image_box->resize(5, 215, this->w()-10, this->h()-210);

T_value = new Fl_Input(30, 10, 80, 20,"T");
R_value = new Fl_Input(30, 40, 80, 20,"R");
A_value = new Fl_Input(30, 70, 80, 20,"A");
K_value = new Fl_Input(30, 100, 80, 20,"K");
L_value = new Fl_Input(30, 130, 80, 20,"LL");
BA_res=new Fl_Output(30, 160, 80, 20, "BA");
all_res=new Fl_Output(30, 190, width-50, 20, "Lf");
tan_A_by2_mul_RplusT=new Fl_Output(430, 130, 120, 20, "tan(A/2)*(R+T)");
T_value->value("2");
A_value->value("90");R_value->value("2");//K_value->value("0.4");
L_value->value("26");
//buttons
cal_BA=new Fl_Button(400,10,70,30,"Add_BA");
cal_BA->callback(BA_but_cb,this);

add_BA=new Fl_Button(480,10,70,30,"C&alcul_Lf");
add_BA->callback(sum_BA_but_cb,this);

add_LL=new Fl_Button(560,10,70,30,"Add_LL");
add_LL->callback(LL_but_cb,this);

calcul_LL=new Fl_Button(640,10,70,30,"C&alcul_LL");
calcul_LL->callback(LL_calc_cb,this);

cal_tan=new Fl_Button(560,130,70,30,"C&alcul_tan");
cal_tan->callback(Tan_but_cb,this);

helpWindowb=new Fl_Button(720,10,70,30,"Help");
helpWindowb->callback(help_but_cb,this);

reset_btn=new Fl_Button(320,10,70,30,"Reset");
reset_btn->callback(reset_but_cb,this);
cl.setK();
K_value->value(to_string(cl.K).c_str());
}//end constructor
//buttons callbacks
void Window::BA_but_cb(Fl_Widget*o,void*v)//calculate button
{
Window* T=(Window*)v;
T->BA_cb();
}
void Window::BA_cb()//calculate BA button inside callback function
{
try{
if(T_value->value()[0] == '\0')throw "error T empty";
else if((!is_digits(T_value->value())))throw "error T not number";
else if((!is_digits(A_value->value())))throw "error A not number";
else if((!is_digits(K_value->value())))throw "error K not number";
else if((!is_digits(R_value->value())))throw "error R not number";
    double T=to_number(T_value->value());
    double A=to_number(A_value->value());
    double K=to_number(K_value->value());double R=to_number(R_value->value());
    BA_res->value(to_string(BA_cal(A,R,K,T)).c_str());
string LLAB=cl.LLBA_(cl.sum_v(cl.LL_v),cl.sum_v(cl.BA_v));
all_res->value(LLAB.c_str());
}catch(const char*e){
 fl_message(const_cast<char*>(e));
}

}
void Window::sum_BA_but_cb(Fl_Widget*o,void*v)//calculate button
{
Window* T=(Window*)v;
T->Lf_cb();
}
void Window::Lf_cb()
{
//BA_res->value(to_string(cl.sum(cl.BA_v)).c_str());
//string LLAB=cl.LLBA_(cl.sum_v(cl.LL_v),cl.sum_v(cl.BA_v));
//
string all=all_res->value();
double Lf=cl.sum(cl.LL_v)+cl.sum(cl.BA_v);
//all_res->value(to_string(Lf).c_str());
all_res->value((all+"="+to_string(Lf)).c_str());
}
void Window::LL_but_cb(Fl_Widget*o,void*v)//calculate button
{
Window* T=(Window*)v;
T->LL_cb();
}
void Window::LL_cb()
{
 try{
if(L_value->value()[0] == '\0')throw "error L empty";
else if((!is_digits(L_value->value())))throw "error L not number";
    cl.add_LL(to_number(L_value->value()));
    string LLAB=cl.LLBA_(cl.sum_v(cl.LL_v),cl.sum_v(cl.BA_v));
    all_res->value(LLAB.c_str());
 }catch(const char*e){
 fl_message(const_cast<char*>(e));
}
}
void Window::LL_calc_cb(Fl_Widget*o,void*v)
{
Window* T=(Window*)v;
T->LL_cal_cb();
}
void Window::LL_cal_cb()
{
L_value->value(to_string(cl.cal_LL(to_number(L_value->value()),to_number(A_value->value()),
            to_number(R_value->value()),to_number(T_value->value()),radius_in_both_or_one_side->value())).c_str());
}
// Callback function for the Fl_Choice widget
void Window::choice_callback(Fl_Widget*o,void*v) {
Window* T=(Window*)v;
T->material_chois();

}
void Window:: material_chois()
{
 cl.materialv=materialchoice->value();
 cl.radiusv=radiuschoice->value();
 cl.setK();
 K_value->value(to_string(cl.K).c_str());
}
//calculate functions
double Window::BA_cal(double A,double R,double K,double T)
{
   double BA=cl.BA_cal(A,R,K,T);
   cl.add(BA);
   return BA;
}
void Window::Tan_but_cb(Fl_Widget*o,void*v)
{
Window* T=(Window*)v;
T->Tan_cb();
}
void Window::Tan_cb()
{
double r=cl.cal_tan(to_number(A_value->value()),
            to_number(R_value->value()),to_number(T_value->value()));
tan_A_by2_mul_RplusT->value(to_string(r).c_str());
}
void Window::help_but_cb(Fl_Widget*o,void*v)
{
 Window* T=(Window*)v;
T->Help_cb();
}
void Window::Help_cb()
{
if(hw==NULL)
{
hw=new Help_Window(100,20,800, 600,"Help");
hw->resizable(this);
}
  const char* acp_name = "при"; // it returned filename in default Windows encoding
       char* utf8_name = fl_locale_to_utf8(acp_name, strlen(acp_name), CP_ACP);

std::cout<<utf8_name<<endl;
hw->show();
}
void Window::reset_but_cb(Fl_Widget*o,void*v)
{
  Window* T=(Window*)v;
  T->reset_cb();
}
void Window::reset_cb()
{
cl.reset_BA_LL();
all_res->value("");
BA_res->value("");
//cl.remove_from_vector_value(cl.LL_v);
    //string LLAB=cl.LLBA_(cl.sum_v(cl.LL_v),cl.sum_v(cl.BA_v));
    //all_res->value(LLAB.c_str());
}
//convert functions
double Window::to_number(const std::string&s)
{
    std::istringstream ist{s};
    ist.exceptions(std::ios_base::failbit);
    double x;
    ist>>x;
    return x;
}
std::string Window::to_string(double x)
{
    std::ostringstream ost;
    ost<<x;
    return ost.str();
}
bool Window::is_digits(const std::string& str)
{
 std::string token_buffer="";
 if (isalpha(str[0])) return 0;
    for (char ch : str) {
        if (isdigit(ch)){
            token_buffer+=ch;

        }else if (ch == '.')
        {
          token_buffer+=ch;
        }else if(isspace(ch))return 0;
    }
    if(token_buffer==""){
            return 0;
    }
    return 1;
}
//distructor function
Window::~Window()
{
    //dtor
}
