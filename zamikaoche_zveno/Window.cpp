#include "Window.h"


MWindow::MWindow(int x,int y,int width, int height, char* title)
         : Fl_Double_Window(x,y,width, height, title)
{

container = new Fl_Group(4, 4, 632, 472);
container->box(FL_BORDER_BOX);

menu = new Fl_Menu_Bar(5,5,400,20);
menu->add("File/Quit",   FL_CTRL+'q', Quit_CB);
menu->add("File/Help",   FL_CTRL+'h', Help_CB);
Fl_Menu_Item *p;
    nominal_b=new Fl_Box(5, 60, 20, 20, "nom");
    nominal = new Fl_Input(25, 60, 80, 20);

    up_b=new Fl_Box(100, 40, 20, 20, "up");
    up_link = new Fl_Input(124, 40, 80, 20);

    low_b=new Fl_Box(100, 80, 20, 20, "low");
    low = new Fl_Input(124, 80, 80, 20);
text_field();
end_link();
but=new Fl_Button(400,105,70,30,"C&alcul");
but->callback(but_cb,this);
butinc=new Fl_Button(25,105,130,30,"add increasing link");
butinc->callback(but_cb_add_encr,this);
butdec=new Fl_Button(170,105,130,30,"add reducing link");
butdec->callback(but_cb_add_decr,this);
//butfr->deactivate();
up=new Fl_Output(35, 150, 580, 20, "res");
r = container->resizable();

container->redraw();
}
void MWindow::but_cb(Fl_Widget*o,void*v)
{
MWindow* T=(MWindow*)v;
T->but_cb_i();
}
void MWindow::but_cb_i()//calculate button
{
try{
if(nominal->value()[0] == '\0')throw "error l empty";
else if((!is_digits(nominal->value())))throw "error l not number";
//cl.print_i(cl.incr_values);
//cl.print_i(cl.decr_values);
//cl.sum_of_top_values_encr_links();
//cl.sum_of_low_values_decrising_links();
//cl.clear_vector();
//cl.print_i(cl.decr_values);
Mesures_values mv;
mv=cl.end_chain();
cout<<mv.top<<endl;
cout<<mv.low<<endl;
end_link_top->value(to_string(mv.top).c_str());
end_link_low->value(to_string(mv.low).c_str());
}catch(const char*e){
 fl_message(const_cast<char*>(e));
}
}/*******************/
void MWindow::but_cb_add_encr(Fl_Widget*o,void*v)//add encrising values
{
MWindow* T=(MWindow*)v;
T->butl_cb_incr();
}
/*add decrising values*/
void MWindow::but_cb_add_decr(Fl_Widget*o,void*v)
{
MWindow* T=(MWindow*)v;
T->butl_cb_decr();
}
void MWindow::butl_cb_incr()
{
try{
if(nominal->value()[0] == '\0')throw "error nominal empty";
else if((!is_digits(nominal->value())))throw "error nominal not number";
cl.incr_values.push_back(
{to_number(up_link->value()),to_number(low->value()),to_number(nominal->value())});
//up->value(cl.sum_of_ls().c_str());
}catch(const char*e){
 fl_message(const_cast<char*>(e));
}
}/*add decrising values*/
void MWindow::butl_cb_decr()
{
try{
cl.decr_values.push_back(
{to_number(up_link->value()),to_number(low->value()),to_number(nominal->value())});
}catch(const char*e){
 fl_message(const_cast<char*>(e));
}
}
void MWindow::text_field()
{
 tb = new Fl_Text_Buffer();

text = new Fl_Text_Display(5,190,630,280,"");
text->buffer(tb);
      char*t1="Размеры A1, A2, A3 называются составляющими, AΔ — замыкающий\n";
      char*t2="В нашем случае, A1 — увеличивающий, A2, A3 — уменьшающие размеры.\n";
      char*t3="\n";
      char*t4="\n";
      char*t5="\n";
      char*t6="\n";
      char*t7="\n";
      char*t8="\n";
      string total( string(t1) + t2+t3+t4+t5+t6+t7+t8);
      tb->text(total.c_str());
}
void MWindow::end_link()
{
     end_link_nom = new Fl_Output(400, 60, 80, 20);

    end_link_top_b=new Fl_Box(475, 40, 20, 20, "Δup");
    end_link_top = new Fl_Output(500, 40, 80, 20);

    end_link_low_b=new Fl_Box(475, 80, 20, 20, "Δlow");
    end_link_low = new Fl_Output(500, 80, 80, 20);
}
double MWindow::to_number(const std::string&s)
{
    std::istringstream ist{s};
    ist.exceptions(std::ios_base::failbit);
    double x;
    ist>>x;
    return x;
}
std::string MWindow::to_string(double x)
{
    std::ostringstream ost;
    ost<<x;
    return ost.str();
}
void MWindow::help_cb()
{
 Help_info *hw=new Help_info(100,20,640, 480,"Example");
 hw->show();
}
bool MWindow::is_digits(const string& str)
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
}/***********************************/

MWindow::~MWindow()
{
    //dtor
}
