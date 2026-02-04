#include "Line.h"
Line::Line(Fl_Double_Window *G_win)
{
    //ctor
    wn=G_win;

}
Line::Line(Fl_Double_Window *G_win,Point pp1,Point pp2)
{
    //ctor
    wn=G_win;
p1=pp1;p2=pp2;
}
//----------------------------------------------------
Line::~Line()
{
    //dtor
}
