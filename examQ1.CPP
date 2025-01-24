// Q.1 Write a C++ program that defines a function incrementByValue to add 5 to the number passed to it using pass-by-value. Demonstrate in the main function that the original value of the variable remains unchanged after calling the function.

#include <iostream>
    using namespace std;

    void increment(int num);

    int main()
    {

        int num = 5; // value

        cout << "incrementByValue: " << num << endl;

        printf("\n");

        increment(num); // function call

        return 0;
    }
    void increment(int num)
    {
        num += 5;
        cout << "incrementByValue: " <<num<<endl;
    }
