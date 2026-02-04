#include "Draw_window.h"

Draw_window::Draw_window(int x,int y,int width, int height, char* title)
         : Fl_Double_Window(x,y,width, height, title)
{
//buttons
drw_l=new Fl_Button(width-80,10,70,30,"Draw Line");
drw_l->callback(Draw_line_but_cb,this);
inp = new Fl_Input(50, 10, 50, 20, "Input:");
inp->value("0");
Fl::focus(inp);
point1 = new PBox(0, 40, w(), h(),this);
resizable(this);
 show();
}
void Draw_window::Draw_line_but_cb(Fl_Widget*o,void*v)
{
Draw_window* T=(Draw_window*)v;
T->Draw_lines();
}
void Draw_window::Draw_lines()
{
double angle_degrees = to_number(inp->value());
if(point1->flag==true)
point1->flag=false;
else if(point1->flag==false)
point1->flag=true;
point1->angle_degrees=angle_degrees;
}
Draw_window::~Draw_window()
{
    //dtor
    delete point1;
}
//convert functions
double Draw_window::to_number(const std::string&s)
{
    std::istringstream ist{s};
    ist.exceptions(std::ios_base::failbit);
    double x;
    ist>>x;
    return x;
}

