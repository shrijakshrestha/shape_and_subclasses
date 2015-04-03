#include <iostream>
#include <string>

#include "Shape.h"
#include "Rectangle.h"
#include "Circle.h"
#include "Square.h"
#include <sstream>


void shapeInput(string *color , bool *filled);

using namespace std;

int main()
{
    string color;
    bool filled;
    double radius,width,length,side;
    int choice;

    cout << "enter the Shape:\n1.circle\n2.rectangle\n3.square" <<endl;
    cin >> choice;
    switch (choice){
    case 1:
    {
        shapeInput(&color,&filled);
        cout<<"enter the radius:";
        cin>>radius;
        Circle createCircle(radius,color,filled);

        cout<<createCircle.toString();
        break;
    }
    case 2:
    {
      shapeInput(&color,&filled);

      cout<<"enter width:";
      cin>>width;
      cout<<"enter length:";
      cin>>length;

      Rectangle createRectangle(width,length,color,filled);

      cout << createRectangle.toString() << endl;

      break;
    }
    case 3:
    {
        shapeInput(&color,&filled);

        cout<<"enter side of square:";
        cin>>side;

        Square createSquare(radius,color,filled);
        cout << createSquare.toString() << endl;
        break;
    }
    default:
    cout << "error";
    }
}


void shapeInput(string *color, bool *filled){
    cout << "Enter the color: ";
    cin >> *color;
    cout << "Is it filled?\n1.yes\n2.no";
    cin >> *filled;
}

