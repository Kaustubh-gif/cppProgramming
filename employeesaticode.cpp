#include<iostream>
using namespace std;
class Employee{
   private:
      int id;
      string name;
      int sal;
     static string companyName; //class member

   public:

     Employee(){
       id = 10;
       name = "null";
       sal = 20000;
      
     }
     Employee(int id,string name,int sal){
       this->id = id;
       this->name = name;
       this->sal = sal;
      // this->companyName = companyName;
     }
     void display(){
       cout<<id<<" "<<name<<" "<<sal<<endl;
       cout<<companyName<<endl;
     }
     void setId(int id){
       this->id = id;
     }
     int getId(){
       return id;
     }
     void setName(string name){
       this->name = name;
     }
     string getName(){
       return name;
     }
     void setSal(int sal){
       this->sal = sal;
     }
     int getSal(){
       return sal;
     }
    static void setCompanyName(string companyName){
       Employee::companyName = companyName;
     }
     static string getCompanyName(){
       return companyName;
     }

};
string Employee::companyName = "ABC";

int main(){

//   Employee::setCompanyName("BitCode");

   Employee * e1 = new Employee(10,"Ajay",25000);

   e1->display();

   Employee * e2 = new Employee(11,"Shubham",26000);

   e2->display();

   Employee * e3 = new Employee(12,"Shreya",30000);
   e3->display();

  // e1->setCompanyName("TechBit");
  Employee::setCompanyName("TechBit");

   e1->display();
   e2->display();
   e3->display();



   return 0;
}

