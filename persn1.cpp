#include <iostream>
#include <cstring>

using namespace std;

class employee
{
private:
  int age;
  string name;
  int salary;
  int rating;

public:
  employee()
  {
    age = 23;
    name = "abc";
    salary = 12000;
    rating = 77;
  }
  employee(int age1, string name1, int salary1, int rating1)
  {
    age = age1;
    name = name1;
    salary = salary1;
    rating = rating1;
  }
  void setage(int age1)
  {
    age = age1;
  }
  int getage()
  {
    return age;
  }
  void setName(string name1)
  {
    name = name1;
  }
  void setsalary(int salary1)
  {
    salary = salary1;
  }
  int getsalary()
  {
    return salary;
  }
  void setrating(int rating1)
  {
    return rating ;
  }

  void display()
  {
    cout << "Age: " << age << endl;
    cout << "Name: " << name << endl;
    cout << "salaey" << salary << endl;
    cout << "rating" << rating << endl;
  }
}