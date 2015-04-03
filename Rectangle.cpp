#include <iostream>
#include<sstream>
#include "Rectangle.h"

using namespace std;

Rectangle::Rectangle()
{
   setWidth(1.0);
    setLength(1.0);
}

Rectangle::Rectangle(double inWidth, double inLength)
{
    setWidth(inWidth);
    setLength(inLength);
}

Rectangle::Rectangle(double inWidth,double inLength,string inColor,bool inFilled):Shape(inColor,inFilled)
{
    setWidth(inWidth);
    setLength(inLength);
}
void Rectangle::setWidth(double inWidth)
{
    width = inWidth;
}

double Rectangle::getWidth()
{
    return width;
}

void Rectangle::setLength(double inLength)
{
    length = inLength;
}

double Rectangle::getLength()
{
    return length;
}

double Rectangle::getArea()
{
     return width*length;
}

double Rectangle::getPerimeter()
{
    return 2*(length+width);
}

string Rectangle::toString(){
    stringstream outLength,outWidth;
    outWidth << getWidth();
    outLength << getLength();
    return "A rectangle with width = "+outWidth.str()+" and length = "+outLength.str() + ", which is a subclass of " + Shape::toString() ;
}


