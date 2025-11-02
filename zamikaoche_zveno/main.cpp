#include "Window.h"


int main (int argc, char ** argv)
{
  setlocale(LC_ALL,".ACP");
  const int width=640; const int height=480;
  MWindow win(100,20,width, height,"End link");
  Fl_Box *rbox = new Fl_Box(0, 0, width, height);
  win.resizable(rbox);
  win.size_range(640,480,0,0);
  win.show();
  return(Fl::run());
}
