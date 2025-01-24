#include <iostream>
#include <cstring>
using namespace std;

class Studentarray
{
private:
    int id;
    string name;
    int marks;
    static string schoolname;
    static int count;

public:
    Studentarray()
    {
        id = count++;
        name = "Ram";
        marks = 50;
    }
    Studentarray(string name, int marks)
    {
        id = count++;
        this->name = name;
        this->marks = marks;
    }
    void setid(int id)
    {
        this->id = id;
    }
    int getid()
    {
        return id;
    }
    void setname(string name)
    {
        this->name = name;
    }
    string getname()
    {
        return name;
    }
    void setmarks(int marks)
    {
        this->marks = marks;
    }
    int getmarks()
    {
        return marks;
    }
    static void setschoolname(string schoolname)
    {
        Studentarray::schoolname = schoolname;
    }
    void display()
    {
        cout << "Id: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
        cout << "Schoolname: " << schoolname << endl;
    }
};
string Studentarray::schoolname = "ABC";
int Studentarray::count = 0;

int main()
{
    int size;
    cout<<"Enter the number of student:";
    cin>>size;

   Studentarray* students = new Studentarray[size];

for(int i = 0; i < size; i++){

    string name;
    int marks;

    cout<<"Enter the name of student:";
    cin>>name;

    cout<<"Enter the marks of student:";
    cin>>marks;

    students[i] = Studentarray(name,marks);
} 

    for (int i = 0; i < size; i++)
    {
        students[i].display();
        cout << endl;
    }
    delete[]students;

     return 0;
}
