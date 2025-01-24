#include<iostream>
#include<cstring>

using namespace std;
class Employee {
private:
    int id;
    string name;
    int salary;
    int ratings;
    string email;

public:
    // Set methods
    void setId(int id) {
        this->id = id;
    }

    void setName(const string &name) {
        this->name = name;
    }

    void setSalary(int salary) {
        this->salary = salary;
    }

    void setRatings(int ratings) {
        this->ratings = ratings;
    }

    void setEmail(const string &email) {
        this->email = email;
    }

    // Get methods
    int getId() const {
        return id;
    }

    string getName() const {
        return name;
    }

    int getSalary() const {
        return salary;
    }

    int getRatings() const {
        return ratings;
    }

    string getEmail() const {
        return email;
    }

    // Display method
    void display() const {
        cout << "Id: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Salary: " << salary << endl;
        cout << "Ratings: " << ratings << endl;
        cout << "Email: " << email << endl;
    }
};

int main() {

    Employee E1;
    E1.setId(10);
    E1.setName("Sandip");
    E1.setSalary(10000);
    E1.setRatings(9);
    E1.setEmail("ovhalsandip8@gmail.com");
    E1.display();

    Employee E2;
    E2.setId(12);
    E2.setName("Ram");
    E2.setSalary(20000);
    E2.setRatings(10);
    E2.setEmail("Ram3@gmail.com");
    E2.display();

    Employee E3;
    E3.setId(14);
    E3.setName("Lakhan");
    E3.setSalary(40000);
    E3.setRatings(12);
    E3.setEmail("lakhan5@gmail.com");
    E3.display();

    Employee E4;
    E4.setId(16);
    E4.setName("Shyam");
    E4.setSalary(22000);
    E4.setRatings(14);
    E4.setEmail("shyam6@gmail.com");
    E4.display();

     return 0;
}