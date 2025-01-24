#include <iostream>
#include <cstring>
using namespace std;

class Circle
{
private:
    int x;
    int y;
    int r;

public:
    Circle()
    {
        x = 2;
        y = 3;
        r = 5;
    }
    Circle(int x1, int y1, int r1)
    {

        x = x1;
        y = y1;
        r = r1;
    }

    void setx(int x1)
    {
        x = x1;
    }
    int getx()
    {
        return x;
    }
    void sety(int y1)
    {
        y = y1;
    }
    int gety()
    {
        return y;
    }
    void setr(int r1)
    {
        r = r1;
    }
    int getr()
    {
        return r;
    }
    void display() const
    {
        cout << "circle :" << endl;
        cout << "x : " << x << endl;
        cout << "y : " << y << endl;
        cout << "r :" << r << endl;
    }
};
int main()
    {

        Circle c1;
        c1.display();

       

        return 0;
    }