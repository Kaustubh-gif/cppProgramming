#include <iostream>
using namespace std;

class Temperature
{
public:
    // Convert Celsius to Fahrenheit
    double convert(double celsius)
    {
        return (celsius * 9 / 5) + 32;
    }

    // Convert Fahrenheit to Celsius
    double convert(double fahrenheit, bool isFahrenheit)
    {
        return (fahrenheit - 32) * 5 / 9;
    }
};

int main()
{
    Temperature temp;

    double c = 25.0; // Celsius
    double f = 77.0; // Fahrenheit

    cout << c << "°C in Fahrenheit: " << temp.convert(c) << "°F" << endl;
    cout << f << "°F in Celsius: " << temp.convert(f,true) << "°C" << endl;

    return 0;
}
