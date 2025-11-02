#ifndef WINDOW_H
#define WINDOW_H
#include <FL/Fl.H>
#include <FL/Fl_Double_Window.H>
#include <FL/Fl_Input.H>
#include <FL/Fl_Output.H>
#include <FL/Fl_Button.H>
#include "Element.h"
#include "Element2.h"
#include <iostream>
#include <cctype>
#include <sstream>
#include "Calkulate.h"
using namespace std;
class MWindow: public Fl_Double_Window
{
    public:

        MWindow(int x,int y,int width, int height, char* title=0);
        virtual ~MWindow();
        inline void but_cb_i();
        static void but_cb(Fl_Widget*o,void*);
        double to_number(const std::string&s);
        std::string to_string(double x);
Fl_Group *container;
Fl_Widget *r;
Fl_Input*in;Fl_Input*in1;Fl_Input*in2;
Fl_Box *b;Fl_Box *b1;Fl_Box *b2;
Fl_Output*up;
Fl_Button*but;
Element *el1;
Element2 *el2;
};

#endif // WINDOW_H
