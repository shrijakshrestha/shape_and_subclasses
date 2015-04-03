

using namespace std;


#ifndef SHAPE_H
#define SHAPE_H


class Shape
{

private:
   string color;
   bool filled;

public:
        Shape();
        Shape(string,bool);
        string getColor();
        void setColor(string);
        bool isFilled();
        void setFilled(bool);
        string toString();
};
#endif

