#include <iostream>

class Shape
{
protected:
    int area;
    int perimeter;

public:
    Shape() {}

    Shape(int area, int perimeter) : area(area), perimeter(perimeter) {}

    virtual void calculateArea() {}
    virtual void calculatePerimeter() {}
};

class Square : public Shape
{
protected:
    int lengthSide;

public:
    Square(int lengthSide) : lengthSide(lengthSide){}

    void calculateArea() override
    {
        area = lengthSide * lengthSide;
    }
    void calculatePerimeter() override
    {
        perimeter = lengthSide * 4;
    }
};
class Circle : public Shape
{
protected:
    int radius;

public:
    Circle(int radius) : radius(radius) {}

    void calculateArea() override
    {
        area = 3.14 * (radius * radius);
    }
    void calculatePerimeter() override
    {
        perimeter = 2 * 3.14 * radius;
    }
};

int main()
{
    return 0;
}
