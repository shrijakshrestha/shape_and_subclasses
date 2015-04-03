using namespace std;

#include "shape.h"

#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle:public Shape{
    protected:
        double width;
        double length;

    public:
        Rectangle();
        Rectangle(double,double);
        Rectangle(double,double,string,bool);
        void setWidth(double);
        double getWidth();
        void setLength(double);
        double getLength();
        double getArea();
        double getPerimeter();
        string toString();

};
#endif

