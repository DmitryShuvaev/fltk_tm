#ifndef WINDOW_H
#define WINDOW_H
#include <FL/Fl.H>
#include <FL/Fl_Double_Window.H>
#include <FL/Fl_JPEG_Image.H>
#include <FL/Fl_Shared_Image.H>
#include <FL/Fl_Box.H>
#include <FL/Fl_Input.H>
#include <FL/Fl_Output.H>
#include <FL/Fl_Button.H>
#include <FL/fl_ask.H>
#include <FL/Fl_Choice.H>
#include <sstream>
#include <cmath>
#include <iostream>
#include "Calculate.h"
#include "ResizableImageBox.h"
#include "Help_Window.h"
class Window: public Fl_Double_Window
{
    public:
        Window(int x,int y,int width, int height, char* title=0);
        virtual ~Window();
//buttons callbacks
static void BA_but_cb(Fl_Widget*o,void*);
inline void BA_cb();

static void sum_BA_but_cb(Fl_Widget*o,void*);
inline void Lf_cb();

static void LL_but_cb(Fl_Widget*o,void*);
inline void LL_cb();

static void LL_calc_cb(Fl_Widget* w, void* user_data);
inline void LL_cal_cb();
// Callback function for the Fl_Choice widget
static void choice_callback(Fl_Widget* w, void* user_data);
inline void material_chois();

static void Tan_but_cb(Fl_Widget*o,void*);
inline void Tan_cb();

static void help_but_cb(Fl_Widget*o,void*);
inline void Help_cb();

static void reset_but_cb(Fl_Widget*o,void*);
inline void reset_cb();
//calculate functions
double BA_cal(double A,double R,double K,double T);
//convert functions
double to_number(const std::string&s);
std::string to_string(double x);
bool is_digits(const std::string& str);

//variables
Fl_Input *T_value;
Fl_Input *R_value;
Fl_Input *A_value;
Fl_Input *K_value;
Fl_Input *L_value;
Fl_Output*BA_res,*all_res,*tan_A_by2_mul_RplusT;
Calculate cl;
//buttons
Fl_Button*cal_BA;
Fl_Button*add_BA;
Fl_Button*add_LL;
Fl_Button*calcul_LL;
Fl_Button*cal_tan;
Fl_Button*helpWindowb;
Fl_Button*reset_btn;
Fl_Choice *materialchoice;
Fl_Choice *radiuschoice;
Fl_Choice *radius_in_both_or_one_side;
ResizableImageBox *image_box;
//
Help_Window *hw=NULL;
};

#endif // WINDOW_H
