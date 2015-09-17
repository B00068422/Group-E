/*
Software Design and Quality
Lab 1 Part 2
17/09/2015
Kevin O Hanlon B00068422
Sean Clancy B00069909
*/

#include <iostream>

using namespace std;

class shape // Base Class
{

public:

    virtual int getArea() = 0; //pure virtual function providing interface framework

    void setWidth(int w)
    {
        width = w;
    }
    void setHeight(int h)
    {
        height = h;
    }
    void setRadius(int r)
    {
        radius = r;
    }
protected:
    int width;
    int height;
    int radius;
};

class Triangle: public shape
{
public:
    int getArea()
    {
        return (width * height)/2;
    }
};

class Circle: public shape
{
public:
    int getArea()
    {
        return (radius*radius)*3.141592;
    }
};

int main()
{
    Triangle Tri;
    Tri.setWidth(5);
    Tri.setHeight(7);
    cout << "Total Triangle area: " << Tri.getArea() << endl; //Print The Area of the object.

    Circle Cir;
    Cir.setRadius(10);
    cout << "Total Circle area: " << Cir.getArea() << endl; //Print The Area of the object.


    return 0;
}
