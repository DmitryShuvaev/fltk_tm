#include "Help_info.h"

Help_info::Help_info(int x,int y,int width, int height, char* title)
         : Fl_Double_Window(x,y,width, height, title)
{
    //ctor

    Fl_Scroll *scroll=new Fl_Scroll(0,0,640,480);
    Fl_Box *box=new Fl_Box(0,0,441,220);     // widget that will contain image
    //box->box(FL_BORDER_BOX);
    Fl_PNG_Image    *jpg=new Fl_PNG_Image  ("img.png");
    box->image(jpg);
    //scroll->add(box);

    scroll->end();
    resizable(scroll);
}

Help_info::~Help_info()
{
    //dtor
}
