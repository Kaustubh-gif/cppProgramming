#include <iostream>
#include <cstring>
int &maximum(int &, int &, int &);

using namespace std;

int main()
{

  int num1;
  int num2;
  int num3;

  cout << "Enter a three number: ";
  cin >> num1 >> num2 >> num3;

  int &max = maximum(num1, num2, num3);

  cout << "maximum number: " << max << endl;

  return 0;
}
int &maximum(int &num1, int &num2, int &num3)
{

  if (num1 >= num2 && num1 >= num3)
  {

    return num1;
  }
  else if (num2 >= num1 && num2 >= num3)
  {
    return num2;
  }
  else
  {
    return num3;
  }
}