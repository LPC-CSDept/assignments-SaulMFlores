#ifndef 	STUDENT_H
#define 	STUDENT_H
#include <vector>
#include <string>
using namespace std;


class Rect
{
    private:
        double width;
        double height;
    public:
        Rect() : width(0), height(0) {}
        void setWidth(double w) {width = w;}
        void setHeight(double h) {height = h;}
        double const getWidth() { return width;}
        double const getHeight() {return height;}
        double const getArea() {return width * height;}
        Rect makeRectanglewithSquare(Square s);
};

class Square
{
    private:
        double width;
    public:
        Square(): width(0){}
        void setWidth(double w) {width = w;}
        double const getWidth() {return width;}
        double const getArea() {return width*width;}
        friend class Rect;
};

#endif