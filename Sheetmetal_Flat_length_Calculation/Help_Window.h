#ifndef HELP_WINDOW_H
#define HELP_WINDOW_H
#include <FL/Fl.H>
//#include <FL/Fl_Text_Display.H>
//#include <FL/fl_draw.H>
#include <FL/Fl_Multiline_Output.H>
#include "ResizableImageBox.h"
#include <FL/Fl_Double_Window.H>

class Help_Window: public Fl_Double_Window
{
    public:
        Help_Window(int x,int y,int width, int height, char* title=0);
        virtual ~Help_Window();

ResizableImageBox *image_box;
};

#endif // HELP_WINDOW_H
