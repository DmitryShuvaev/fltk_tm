#include "Window.h"

int main (int argc, char ** argv)
{
  const int width=800; const int height=600;
  Window win(100,20,width, height,"Sheetmetal Flat length Calculation");
  Fl_Box *rbox = new Fl_Box(0, 0, width, height);
  win.resizable(rbox);
  win.size_range(640,480,0,0);
  win.show();
  return(Fl::run());
}
