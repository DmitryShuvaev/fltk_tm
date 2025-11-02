#ifndef WINDOW_H
#define WINDOW_H
#include <FL/Fl.H>
#include <FL/Fl_Double_Window.H>
#include <FL/Fl_Input.H>
#include <FL/Fl_Output.H>
#include <FL/Fl_Button.H>
#include <FL/Fl_Text_Display.H>
#include <FL/Fl_Menu_Bar.H>
#include <FL/fl_ask.H>
#include "Element.h"
//#include "Element2.h"
#include <iostream>
#include <cctype>
#include <sstream>
#include "Help_info.h"
#include "Calkulate.h"
using namespace std;
class MWindow: public Fl_Double_Window
{
    public:

        MWindow(int x,int y,int width, int height, char* title=0);
        virtual ~MWindow();
        inline void but_cb_i();
        inline void butl_cb_incr();
        inline void butl_cb_decr();
        static void but_cb(Fl_Widget*o,void*);
        static void but_cb_add_encr(Fl_Widget*o,void*);
        static void but_cb_add_decr(Fl_Widget*o,void*);
        double to_number(const std::string&s);
        bool is_digits(const string& str);
        std::string to_string(double x);
        static void Quit_CB(Fl_Widget *, void *)
        {
         exit(0);
        }
        inline void help_cb();
        static void Help_CB(Fl_Widget*o,void*v)
        {
         MWindow* T=(MWindow*)v;
         T->help_cb();
        }
         void text_field();
         void end_link();
Fl_Group *container;
Fl_Widget *r;
//Fl_Input*in;Fl_Input*in1;Fl_Input*in2;
Fl_Box *b;Fl_Box *b1;Fl_Box *b2;Fl_Box *bres;
Fl_Output*up,*end_link_nom,*end_link_top,*end_link_low;
Fl_Button*but,*butinc,*butdec;
Element *el1,*el_res;
//Element2 *el2;
Fl_Text_Buffer* tb;
Fl_Text_Display *text;
Fl_Menu_Bar *menu;
Fl_Box *nominal_b,*up_b,*low_b;
Fl_Box *end_link_top_b,*end_link_low_b;
Fl_Input *nominal,*up_link,*low;
Calkulate cl;
};

#endif // WINDOW_H
