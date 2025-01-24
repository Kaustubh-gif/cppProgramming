#include <iostream>
    using namespace std;

    void increment(int num);

    int main()
    {

        int num = 10; // value

        cout << "incrementByref: " << num << endl;

        printf("\n");

        increment(num); // function call

        return 0;
    }
    void increment(int num)
    {
        num += 10;
        cout << "incrementByref: " <<num<<endl;
    }
}