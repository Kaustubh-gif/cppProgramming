#include <iostream>
#include <cstring>
using namespace std;

// Function to multiply a number by 3 using a pointer
void multiplyByPointer(int* num) {
    *num *= 3; 
}

int main() {
    int number = 5;

    cout << "Original value of number: " << number << endl;


    multiplyByPointer(&number);

    cout << "Value of number after calling multiplyByPointer: " << number << endl;

    return 0;
}