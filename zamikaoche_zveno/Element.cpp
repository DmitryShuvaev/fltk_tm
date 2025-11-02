#include "Element.h"
/*
int Element::handle(int e)
//=======================================================================
{
    static int offset[2] = { 0, 0 };
    static int tex=0,tey,dx=0,dy=0;
    POINT p2;
 switch(e) {
 case FL_ENTER: // When the cursor enters this box
 // Change the color to red
 color (FL_RED);
 // Change the label to black
 labelcolor(FL_BLACK);
 // Notify window to redraw is needed
 damage(1);
 return 1;
 case FL_LEAVE: // When the cursor leave this box
 // Change the color to gray
 color(FL_GRAY);
 // Change the label to black
 labelcolor(FL_BLACK);
 // Notify window to redraw is needed
 damage(1);
 return 1;
 case FL_PUSH:
     // When mouse button is pushing
                offset[0] = x() - Fl::event_x();    // save where user clicked for dragging
                offset[1] = y() - Fl::event_y();
//                cout<<wn->b->x();
                tex=x();
                tey=y();
                POINT p;
                p.x=x();p.y=y();
                points.push_back(p);
 damage(1);
 return 1;
 case FL_RELEASE: // When release the mouse button
     points.clear();
     offset[0] = 0;offset[1] = 0;
 // Change the label color to black
 labelcolor(FL_BLACK);
                 wn->redraw();
 damage(1);
 return 1;
 case FL_DRAG:
     // When drag the mouse button
//                cout<<"x="<<tex-x()<<endl;
                p2.x=x();p2.y=y();
                points.push_back(p2);
                position(offset[0]+Fl::event_x(), offset[1]+Fl::event_y());     // handle dragging
 damage(1);
                 wn->redraw();

 return 1;
 default:
 return Fl_Group::handle(e);
 }
 };
 */



