#include <iostream>
#include "shape.h"

using namespace std;

Shape::Shape()
{
    setColor("green");
    setFilled(true);
}

Shape::Shape(string inColor, bool inFilled)
{
    setColor(inColor);
    setFilled(inFilled);
}

string Shape::getColor()
{
    return color;
}

void Shape::setColor(string inColor)
{
    color = inColor;
}

bool Shape::isFilled()
{
    return filled;
}

void Shape::setFilled(bool inFilled)
{
    filled = inFilled;
}

string Shape::toString()
{
    string fillCondition;
    if(isFilled()==true)
        fillCondition="filled.";
    else
        fillCondition="not filled.";

    return "A shape with the color of "+getColor()+" and "+fillCondition;
}

