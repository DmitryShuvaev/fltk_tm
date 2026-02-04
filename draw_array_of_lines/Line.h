#ifndef LINE_H
#define LINE_H
#include <FL/Fl.H>
#include <FL/Fl_Double_Window.H>
    // Define a simple Point structure
    struct Point {
        int x, y;
        Point():x(0),y(0){}
        Point(int px, int py) : x(px), y(py) {}
    };
class Line
{
    public:
        Line(Fl_Double_Window *G_win);
        Line(Fl_Double_Window *G_win,Point p1,Point p2);
bool IsPointInsideAABB(const Point& p, const Point& box) {
    return (p.x >= box.x-20 && p.x <= box.x + 20 &&
            p.y >= box.y-20 && p.y <= box.y + 20);
}
        virtual ~Line();
    Fl_Double_Window *wn;
    Point p1;
    Point p2;
};

#endif // LINE_H
