#include "Draw_window.h"

int main (int argc, char ** argv)
{
  const int width=800; const int height=600;
  Draw_window win(100,20,width, height,"Draw lines from button");

  return(Fl::run());
}
