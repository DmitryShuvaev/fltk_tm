#ifndef ELEMENT2_H
#define ELEMENT2_H
#include <FL/Fl_Group.H>
#include <FL/Fl_Box.H>
#include <FL/fl_draw.H>
#include <FL/Fl_Input.H>
#include <FL/Fl_Output.H>
class Element2: public Fl_Group
{
    public:
    Element2(int X, int Y) : Fl_Group(X, Y, 80, 20)
    {
    up = new Fl_Output(X, Y, w(), h());
    //b->box(FL_BORDER_BOX);
fb=new Fl_Box(X-350, Y, 350, 20, "Диаметр заготовки в зависимости от длины детали");
    end();
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
Fl_Output *up;
Fl_Box *fb;
};

#endif // ELEMENT2_H
