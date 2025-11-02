#include "Help_Window.h"

Help_Window::Help_Window(int x,int y,int width, int height, char* title)
         : Fl_Double_Window(x,y,width, height, title)
{
    //ctor
//     Fl_Multiline_Output *out = new Fl_Multiline_Output(10,30,width-20,height-30,"");
//             //out->labelsize(20);
//        out->align(FL_ALIGN_TOP|FL_ALIGN_LEFT);
//        out->value("this is first \nsecond");
//        const char* acp_name = "при"; // it returned filename in default Windows encoding CP_ACP
//       char* utf8_name = fl_locale_to_utf8(acp_name, strlen(acp_name), 1251);
//       char *lac=fl_utf8_to_locale(acp_name, strlen(acp_name), 1251);
//       //unsigned short ChineseStr[] = { 0x00A6, 0x015B, 0x016C, 0x0000};
//        out->value(utf8_name);
image_box=new ResizableImageBox(0, 0, this->w(), 300, 0, "help_ig.jpg");
image_box->resize(5, 5, this->w()-10, this->h()-210);
}

Help_Window::~Help_Window()
{
    //dtor
}
