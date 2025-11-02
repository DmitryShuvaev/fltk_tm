#ifndef HELP_INFO_H
#define HELP_INFO_H
#include <FL/Fl_Double_Window.H>
#include <FL/Fl_Shared_Image.H>
#include <FL/Fl_JPEG_Image.H>
#include <FL/Fl_Box.H>
#include <FL/Fl_Scroll.H>
#include <FL/Fl_PNG_Image.H>
class Help_info: public Fl_Double_Window
{
    public:
    Help_info(int x,int y,int width, int height, char* title=0);
        virtual ~Help_info();


};

#endif // HELP_INFO_H
