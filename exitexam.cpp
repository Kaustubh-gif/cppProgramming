/*create a cpp prg for a school management system that manages student information teacher info and courses offer by a school for that u have to create 
	1. create a base clas person with atributes name age adress provide a set and get methods for this attributes
	2. derived 2 classes student & teacher from the person class add attributes specific to students & teachers such  as roll no & subject respectivly
	3. create an array of student objects and an aray of teacher objects & enter the data 
*/


#include<iostream>
#include<cstring>


using namespace std;

class Person{
    private:
    string name;
    int age;
    string address;

    public:
    Person(){
        name = "NULL";
        age = 23;
        address = "Pune";
    }
    Person(string name, int age, string address){
        this-> name = name;
        this-> age = age;
        this-> address = address;
    }

    void setname(string name) {
        this->name = name;
    }
    string getname(){
        return name;
    }

    void setage(int age){
        this->age = age;
    }
    int getage(){
        return age;
    }

    void setaddress(string address){
        this->address = address;
    }
    string getaddress(){
        return address;
    }

    virtual void display()const{
        cout<< "Person Details: "<<endl;
        cout<<" Name: "<< name <<endl;
        cout<<" Age: "<< age <<endl;
        cout<<" Address: "<<address <<endl;
    }
};

class Student : public Person{
    private:
    int rollno;
    string subject;

    public:
     Student(){
        rollno = 96;
        subject = "art";
    }
    Student(int rollno, string subject){
        this->rollno = rollno;
        this->subject = subject;
    }

    void setRollNo(int rollno) {
        this->rollno = rollno;
    }

        int getRollno() {
        return rollno;
    }


    void setsubject(string subject) {
        this->subject = subject;
    }

    string getsubject() {
        return subject;
    }

    void displayStudent()const {
        cout << "Roll No: " << rollno << endl;
        cout << "Course: " << subject << endl;
        }
};
class Teacher : public Person {
private:
    string subject;
    string department;

public:
   Teacher(){
    subject = "history";
    department = "IT";
   }

   Teacher(string subject, string department){
    this->subject = subject;
    this->department = department;
   }


    void setSubject(string subject) {
        this->subject = subject;
    }
    string getSubject() {
        return subject;
    }


    void setDepartment(string department) {
        this->department = department;
    }
   
    string getDepartment() {
        return department;
    }

    void displayTeacher() const {
        Person::display();
        cout << "Subject: " << subject << endl;
        cout << "Department: " << department << endl;
    }
};
int main() {
    int numStudents, numTeachers;

    cout << "Enter number of Students: ";
    cin >> numStudents;

    cout << "Enter number of Teachers: ";
    cin >> numTeachers;

    Student* students = new Student[numStudents];
    Teacher* teachers = new Teacher[numTeachers];

    for (int i = 0; i < numStudents; i++) {
        string name, address, course;
        int age, rollNo;

        cout << "Enter details for student:  " << endl;
        cout << "Name: ";
        cin >> name;

        cout << "Age: ";
        cin >> age;

        cout << "Address: ";
        cin >> address;

        cout << "Roll No: ";
        cin >> rollNo;

        cout << "Subject: ";
        cin >> course;

        students[i].setname(name);
        students[i].setage(age);
        students[i].setaddress(address);
        students[i].setRollNo(rollNo);
        students[i].setsubject(course);
    }

    for (int i = 0; i < numTeachers; i++) {
        string name, address, subject, department;
        int age;

        cout << "Enter details for teacher: " << endl;
        cout << "Name: ";
        cin >> name;

        cout << "Age: ";
        cin >> age;

        cout << "Address: ";
        cin >> address;

        cout << "Subject: ";
        cin >> subject;

        cout << "Department: ";
        cin >> department;

        teachers[i].setname(name);
        teachers[i].setage(age);
        teachers[i].setaddress(address);
        teachers[i].setSubject(subject);
        teachers[i].setDepartment(department);
    }

    cout<<"\n "<< endl;
    cout << "Student Information:" << endl;
    for (int i = 0; i < numStudents; i++) {
        students[i].display();
    }

    cout<<"\n"<< endl;
    cout << "Teacher Information:" << endl;
    for (int i = 0; i < numTeachers; i++) {
        teachers[i].display();
    }

    delete[] students;
    delete[] teachers;

    return 0;
}