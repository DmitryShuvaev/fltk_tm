#include "PBox.h"

PBox::PBox(int t, int l, int width, int height,Fl_Double_Window *G_win)
         :Fl_Box(FL_UP_BOX, t, l, width, height, "")
{
    //ctor
    wn=G_win;
        xx1=t;
        yy1=l;
        box(FL_BORDER_BOX);
}
int PBox::handle(int e)
//=======================================================================
{
    static int tex=0,tey,dx=0,dy=0;
    int key = Fl::event_key();//keyboard event
 switch(e) {
 case FL_MOVE: // When the cursor enters this box
xc=Fl::event_x();yc=Fl::event_y();
 if(!first_mc){
 fl_color(FL_RED);
// save where user clicked for dragging
        Point p=on_colision_add_x_y();
        xx1=p.x-r;
        yy1=p.y-r;
        draw();
        wn->redraw();
 damage(1);
 }
else if(first_mc)//clicket first time
 {
   // save where user clicked for dragging
        Point p=on_colision_add_x_y();
        xx1=p.x-r;
        yy1=p.y-r;
        draw();
        wn->redraw();
 damage(1);
 }
 return 1;
 case FL_PUSH:
     // When mouse button is pushing
        if(!first_mc)
        {
         first_mc=true;
         Point p=on_colision_add_x_y();
         lx=p.x;
         ly=p.y;
        }else if(first_mc)
        {
          first_mc=false;
          Point p=on_colision_add_x_y();
          lx2=p.x;
          ly2=p.y;
          if(f_pr)
          {
            double angle_in_radians = angle_degrees * (M_PI / 180.0);
            lx2 = lx + (sin(angle_in_radians) * (xc-lx));
            ly2 = ly + (cos(angle_in_radians) * (yc-ly));
            f_pr=false;
          }
          add_line(Line(wn,Point(lx,ly),Point(lx2,ly2)));
        }
         damage(1);
 return 1;
case FL_KEYUP:
    if(key=='f')
    {
        f_pr=true;
        //cout<<f_pr<<endl;
    }
return 1;
 default:
 return Fl_Box::handle(e);
 };
 }
PBox::~PBox()
{
    //dtor
}
Point PBox::on_colision_add_x_y()
{
         Line l(wn);
         Point p;
         p.x=Fl::event_x();p.y=Fl::event_y();
         int s=lines.size();
          for(size_t i = 0; i <s ; i++)
          {
           if(l.IsPointInsideAABB(Point(p.x,p.y),lines[i].p1))
              {
                p.x=lines[i].p1.x;
                p.y=lines[i].p1.y;
              }else if(l.IsPointInsideAABB(Point(p.x,p.y),lines[i].p2))
              {
                p.x=lines[i].p2.x;
                p.y=lines[i].p2.y;
              }
          }
          return p;
}
