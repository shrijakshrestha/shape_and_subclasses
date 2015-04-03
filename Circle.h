using namespace std;

#include "shape.h"

#ifndef CIRCLE_H
#define CIRCLE_H

class Circle:public Shape{

private:
    double radius;


public:
    Circle();
    Circle(double);
    Circle(double,string,bool);
    double getRadius();
    void setRadius(double);
    double getArea();
    double getPerimeter();
    string toString();

};
#endif

