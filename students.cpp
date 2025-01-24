#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
    static int count; // Static variable to keep track of the count
    int id;           // Unique ID for each student
    string name;
    int marks;
    string school_name;

public:
    // Constructor
    Student(string name, int marks, string school_name)
    {
        this->id = ++count; // Assign a unique ID and increment the count
        this->name = name;
        this->marks = marks;
        this->school_name = school_name;
    }

    // Method to display student details
    void displayDetails() const
    {
        cout << "ID: " << id << ", Name: " << name
             << ", Marks: " << marks
             << ", School: " << school_name << endl;
    }

    // Static method to get the total count of students
    static int getCount()
    {
        return count;
    }
};

// Initialize static member
int Student::count = 0;

int main()
{
    // Create student objects
    Student student1("Alice", 85, "Greenfield High");
    Student student2("Bob", 90, "Greenfield High");

    // Display student details
    student1.displayDetails();
    student2.displayDetails();

    // Display total count of students
    cout << "Total Students Created: " << Student::getCount() << endl;

    return 0;
}
