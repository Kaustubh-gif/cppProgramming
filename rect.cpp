#include <iostream>
#include <string>

using namespace std;

class Rectangle {
private:
    int x;
    int y;
    int width;
    int height;

public:
    // Default constructor
    Rectangle() : x(0), y(0), width(1), height(1) {
        // Default values: x = 0, y = 0, width = 1, height = 1
    }

    // Parameterized constructor
    Rectangle(int x, int y, int width, int height) : x(x), y(y), width(width), height(height) {
    }

    // Display method
    void display() const {
        cout << "Rectangle details:" << endl;
        cout << "x: " << x << endl;
        cout << "y: " << y << endl;
        cout << "Width: " << width << endl;
        cout << "Height: " << height << endl;
    }
};

int main() {
    // Creating rectangle object using default constructor
    Rectangle rect1;
    rect1.display();

    // Creating rectangle object using parameterized constructor
    Rectangle rect2(10, 20, 30, 40);
    rect2.display();

    return 0 ;
}
