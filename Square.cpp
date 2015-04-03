#include <iostream>

#include "Square.h"


#include <sstream>

using namespace std;

Square::Square():Rectangle()
{

}

Square::Square(double inSide)
{
    setWidth(inSide);
    setLength(inSide);

}


Square::Square(double inSide, string inColor, bool inFilled):Rectangle(inSide,inSide,inColor,inFilled)
{

}

double Square::getSide()
{
    return length;
}

void Square::setSide(double inSide)
{
    length=inSide;
    width=inSide;
}

void Square::setWidth(double inSide)
{
    width=inSide;
}

void Square::setLength(double inSide)
{

    length=inSide;
}

string Square::toString()
{
    stringstream outSide;
    outSide<<getSide();
    return "A square with side = " + outSide.str() + " which is a subclass of " + Rectangle::toString();
}

