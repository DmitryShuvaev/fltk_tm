#ifndef PBOX_H
#define PBOX_H
#include <FL/Fl_Box.h>
#include <FL/fl_draw.H>
#include <FL/Fl_Double_Window.H>
#include <FL/Fl.H>
#include <vector>
#include <math.h>
#include "Line.h"
#include <iostream>
#include <FL/names.h>
using namespace std;
class PBox: public Fl_Box
{
    public:
        PBox(int t, int l, int width, int height,Fl_Double_Window *G_win);
        virtual ~PBox();
        Point on_colision_add_x_y();
        void add_line(Line l) {
            lines.push_back(l);
            draw();
        }
void draw()
{
 if(flag)
 {
 fl_color(FL_RED);
 // fl_line_style(FL_SOLID,3);
 fl_pie(xx1, yy1, r*2, r*2, 0.0, 360.0);
 fl_rect(x(), y(), w(), h(), FL_DARK_BLUE);
 if(first_mc)
 {
//Converting degrees to radians for calculation
double angle_in_radians = angle_degrees * (M_PI / 180.0);
double x2 = lx + (sin(angle_in_radians) * (xc-lx));
double y2 = ly + (cos(angle_in_radians) * (yc-ly));
if(f_pr)
{
fl_line(lx, ly,x2, y2);//if f button pressed
}else
{
 fl_line(lx,ly,xc,yc);
}
 }
 }
 for(size_t i = 0; i < lines.size(); i++)
 {
   fl_line(lines[i].p1.x, lines[i].p1.y, lines[i].p2.x,lines[i].p2.y);
 }
}/*end of draw */
 // Event handler
 int handle(int e);
Fl_Double_Window *wn;
int xx1,xx2,xc;
int yy1,yy2,yc;
int r=20;
bool flag=false;
bool first_mc=false;
int lx,ly,lx2,ly2;
std::vector<Line> lines;
double angle_degrees;
bool f_pr=false;
};

#endif // PBOX_H
