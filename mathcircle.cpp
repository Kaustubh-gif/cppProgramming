#include <iostream>
using namespace std;

class Math
{
private:
    double radius, length, width, base, height;

public:
    // Set methods
    void setCircle(double r) { radius = r; }
    void setRectangle(double l, double w)
    {
        length = l;
        width = w;
    }
    void setTriangle(double b, double h)
    {
        base = b;
        height = h;
    }

    // Overloaded methods to calculate area
    double area() { return 3.14159 * radius * radius; } // Circle
    double area(double l, double w) { return l * w; }   // Rectangle
    double area(double b, double h, bool isTriangle)
    {
        return 0.5 * b * h; // Triangle
    }
};

int main()
{
    Math math;
    math.setCircle(5);
    cout << "Area of Circle: " << math.area() << endl;

    math.setRectangle(4, 6);
    cout << "Area of Rectangle: " << math.area(4, 6) << endl;

    math.setTriangle(5, 7);
    cout << "Area of Triangle: " << math.area(5, 7, true) << endl;
    return 0;
}
