#include <iostream>
#include <cmath>

class Rectangle
{
    public:
    Rectangle(double width, double height)
    : width{width}, height{height} {
    }

    double area() const 
    {
      return width*height;
    }

    private:
    double width;
    double height;
};

class Square 
{
    public:
    Square(double side)
    : side(side) {        
    }

    double area() const
    {
      return side*side;
    }

    private:
    double side;
};

class Circle
{
    public:
    Circle(double radius)
    : radius{radius} {
    }

    double area() const
    {
      return M_PI*radius*radius;
    }

    private:
    double radius;
};

template<class T>
void printArea(const T& shape)
{
  std::cout <<shape.area() <<"\n";
}

int main() {
    Rectangle r1{ 3.0, 5.0 };
    Square s1{ 4.0 };
    Circle c1{ 10.0 };

    printArea(r1);
    printArea(s1);
    printArea(c1);

    return 0;
}

/**
* 1. Which one of these do you think is easier to implement and use, dynamic or static polymorphism?
* I think static polymorphism is easier to implement and use.

* 2. Modern C++ development highly encourages static polymorphism over dynamic polymorphism, why do you think that is?
* Because We can see that static polymorphism use lesser code than dynamic and it's more performant than dynamic.
*/

