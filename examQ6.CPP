#include <iostream>
#include <string>

using namespace std;

class Rectangle {
private:
    int x;
    int y;
    int length;
    int breath;

public:
    // Default constructor
    Rectangle() : x(0), y(0), length(1), breath(1) {
        // Default values: x = 0, y = 0, length = 1, breath = 1
    }

    // Parameterized constructor
    Rectangle(int x, int y, int width, int height) : x(x), y(y), length(length), breath(breath) {
    }

    // Display method
    void display() const {
        cout << "Rectangle details:" << endl;
        cout << "x: " << x << endl;
        cout << "y: " << y << endl;
        cout << "length: " << length << endl;
        cout << "breath: " << breath << endl;
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
