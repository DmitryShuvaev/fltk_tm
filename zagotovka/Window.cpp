#include "Window.h"


MWindow::MWindow(int x,int y,int width, int height, char* title)
         : Fl_Double_Window(x,y,width, height, title)
{
container = new Fl_Group(5, 5, 630, 470);
container->box(FL_BORDER_BOX);
int pos = container->y() + (container->children() * 20);
el1=new Element(5, 24,this);
container->add(el1);
//container->add(new Element(84, 5,this));
//container->add(new Element(163, 5,this));
el2=new Element2(400, 44);
container->add(el2);
//b = new Fl_Box(5, 5, 80, 20, "element");
//b->box(FL_BORDER_BOX);
//container->add(b);
//b1 = new Fl_Box(84, 5, 80, 20, "element");
//b1->box(FL_BORDER_BOX);
//container->add(b1);
//b2 = new Fl_Box(163, 5, 80, 20, "element");
//b2->box(FL_BORDER_BOX);
//container->add(b2);
//container->add(new Fl_Box(5, 24, 20, 20, "D"));
//in=new Fl_Input(25,24,80,20);
//in->box(FL_BORDER_BOX);
//container->add(in);
//container->add(new Fl_Box(100, 24, 20, 20, "L"));
//in1=new Fl_Input(124,24,80,20);
//in1->box(FL_BORDER_BOX);
//container->add(in1);
container->add(new Fl_Box(5, 64, 350, 20, "Заготовка из круглого проката по ГОСТ 2590-88, мм"));
//up=new Fl_Output(400,44,80,20);
//container->add(up);
but=new Fl_Button(50,150,70,30,"C&alcul");
but->callback(but_cb,this);
//in2=new Fl_Input(163,24,80,20);
//in2->box(FL_BORDER_BOX);
//container->add(in2);
r = container->resizable();
//container->resizable(0); // [1] (see also Greg's post)
//container->resize(
//container->x(),
//container->y(),
//container->w(),
//container->children() * 20);
//container->resizable(r); // [1]
//container->init_sizes(); // [2]
//container->parent()->init_sizes();
container->redraw();
}
void MWindow::but_cb(Fl_Widget*o,void*v)
{
MWindow* T=(MWindow*)v;
T->but_cb_i();
}
void MWindow::but_cb_i()
{

double D=to_number(el1->in1->value());
double L=to_number(el1->in2->value());
Calkulate cl;
D=cl.LD(D,L);
el2->up->value(to_string(D).c_str());
//string s=to_string(5);
//cout<<s<<endl;
}/*******************/
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
MWindow::~MWindow()
{
    //dtor
}
