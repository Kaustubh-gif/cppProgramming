#include <iostream>
#include <cstring>

using namespace std;

class Student
{
private:
    int id; // data members
    string name;
    int marks;
    static string schoolname;
    static int count;

public:
    Student()
    {
        id = count++;
        name = "NULL";
        marks = 90;
    }

    Student(string name, int marks)
    {
        id = count++;
        this->name = name;
        this->marks = marks;
    }
    // Set methods

    void display()
    {
        cout<<"Id: "<<id<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Marks: "<<marks<<endl; 
        cout<<"Schoolname: "<<schoolname<<endl;
    }
    void setId(int id)
    {
        this->id = id;
    }
    int getId()
    {
        return id;
    }
    void setName(string name)
    {
        this->name = name;
    }
    string getName()
    {
        return name;
    }
    void setmarks(int marks)
    {
        this->marks = marks;
    }
    int getmarks(){
        return marks;
    }
    static void setschoolName(string SchoolName){
        Student::schoolname=schoolname;
    }
    static string getSchoolname(){
        return schoolname;
    }
};
    string Student::schoolname="KK School";
    int Student::count = 0;

int main()
{

    
        Student s1("AJay",85);
        s1.display();
        cout<<" "<<endl;

        Student s2("Byjus",79);
        s2.display();
        cout<<" "<<endl;

        Student s3("BT",99);
        s3.display();
        cout<<" "<<endl;

    return 0;
}
