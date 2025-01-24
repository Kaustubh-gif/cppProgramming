#include <iostream>
#include <cstring>

using namespace std;
int &maximum(int arr[], int size);

int main()
{

    int size;

    cout << "Enter the size of array:\n ";
    cin >> size;

    int arr[size];

    cout << "Enter elements in an array:\n";

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << "Array elements:\n";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << (" ");
    }
    cout << endl;

    int &max = maximum(arr, size);
    cout << "The maximum value in the array is: " << max << endl;

    return 0;
}

int &maximum(int arr[], int size)
{
    int &max = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
       return max;
}
