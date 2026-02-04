#ifndef DRAW_WINDOW_H
#define DRAW_WINDOW_H
#include <FL/Fl.H>
#include <FL/Fl_Double_Window.H>
#include <FL/Fl_Button.H>
#include <FL/fl_draw.H>
#include <FL/Fl_Input.H>
#include <FL/Fl_Box.H>
#include <iostream>
#include <sstream>

#include "PBox.h"
#include "Line.h"
class Draw_window: public Fl_Double_Window
{
    public:
        Draw_window(int x,int y,int width, int height, char* title=0);
        virtual ~Draw_window();
        //buttons callbacks
static void Draw_line_but_cb(Fl_Widget*o,void*);
inline void Draw_lines();

        void add_point(Point p){
            redraw(); // Request a redraw when points are added
        }
        void draw(){
           Fl_Double_Window::draw();
        if(point1!=NULL)
        {
            point1->draw();
        }
            fl_color(FL_BLACK);
            fl_line_style(FL_SOLID,3);
            //Set drawing color (optional)
            fl_color(FL_BLUE);
            fl_line_style(FL_SOLID,3);
        }

double to_number(const std::string&s);
Fl_Input* inp;
//buttons
Fl_Button*drw_l;
PBox *point1=NULL;
int r=20;
int xx1;
int yy1;
};

#endif // DRAW_WINDOW_H
