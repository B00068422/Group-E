/*
Software Design and Quality
Lab 1 Part 2
17/09/2015
Kevin O Hanlon B00068422
Aaron Gallagher B00072852
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
        Radius = r;
    }
    void setLength(int l)
    {
        length = l;
    }
protected:
    int width;
    int height;
    int Radius;
    int length;
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
        return (Radius*Radius)*3.141592;
    }
};

class Rectangle: public shape
{
public:
    int getArea()
    {
        return (length*height);
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

    Rectangle Rec;
    Rec.setLength(10);
    Rec.setHeight(5);
    cout << "Total Rectangle area: " << Rec.getArea() << endl; //Print The Area of the object.

    cout << "Total area of all shapes: " << Rec.getArea()+Cir.getArea()+Tri.getArea() << endl;

    return 0;
}
