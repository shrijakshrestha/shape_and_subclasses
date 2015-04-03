
#include<iostream>
#include<math.h>
#include<sstream>

#include "Circle.h"


using namespace std;

Circle::Circle()
{
    setRadius(1.0);
}

Circle::Circle(double inRadius)
{
    setRadius(inRadius);
}

Circle::Circle(double inRadius,string inColor, bool inFilled):Shape(inColor, inFilled)
{
    setRadius(inRadius);
}

double Circle::getRadius()
{
    return radius;
}

void Circle::setRadius(double inRadius)
{
    radius = inRadius;
}

double Circle::getArea()
{
    return M_PI*pow(radius, 2);
}

double Circle::getPerimeter()
{
 return 2*M_PI*radius;
}



string Circle::toString()
{
    stringstream outRadius;
    outRadius << getRadius();
    return "A circle with radius = "+outRadius.str()+", which is a subclass of "+Shape::toString();
}

