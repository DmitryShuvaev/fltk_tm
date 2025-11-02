#ifndef ELEMENT_H
#define ELEMENT_H
#include <FL/Fl_Group.H>
#include <FL/Fl_Box.H>
#include <FL/fl_draw.H>
#include <FL/Fl.H>
#include <FL/Fl_Double_Window.H>
#include <FL/Fl_Input.H>
#include <vector>
using namespace std;
class Element: public Fl_Group
{
    public:
        struct POINT
        {
            int x,y;
        };
    Element(int X, int Y,Fl_Double_Window *G_win,const char* f) : Fl_Group(X, Y, 400, 80)
    {

    //b->box(FL_BORDER_BOX);
    nominal_b=new Fl_Box(X+5, Y, 20, 20, f);
    nominal = new Fl_Input(X+25, Y, 80, 20);

    up_b=new Fl_Box(X+100, Y-20, 20, 20, "up");
    up_link = new Fl_Input(X+124, Y-20, 80, 20);


    low_b=new Fl_Box(X+100, Y+20, 20, 20, "low");
    low = new Fl_Input(X+124, Y+20, 80, 20);

    end();
    wn=G_win;
    }
//           virtual void draw()
//        {
//            //Fl_Window::draw();
//            draw_line();
//            this->redraw();
//        }
        void draw_line()
        {
            fl_color(FL_RED);
            fl_line(x(),y(),w(),h());
        }
 //int handle(int e);
Fl_Box *nominal_b,*up_b,*low_b;
Fl_Input *nominal,*up_link,*low;
Fl_Double_Window *wn;
vector<POINT>points;
};

#endif // ELEMENT_H
