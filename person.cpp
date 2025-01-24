#include<iostream>
#include<cstring>

using namespace std;

class Person{
   private:
     int age;
     string name;

   public:
      Person(){
       age = 26;
       name = "null";
      }
      Person(int age1,string name1){
       age = age1;
       name = name1;
      }
      void setAge(int age1){
       age = age1;
      }
      int getAge(){
       return age;
      }
      void setName(string name1){
       name = name1;
      }
      void display(){
       cout<<"Age: "<<age<<endl;
       cout<<"Name: "<<name<<endl;
      }

      void setPara(Person person){
       person.age = 50;
       person.name = "Rohan";
      }
      void setPara1(Person &person){
       person.age = 40;
       person.name = "Asha";
      }
      void setPara2(Person * person){
       person->age = 30;
       person->name = "Nihal";
      }
};
int main(){

   Person p1(23,"Akash");
   p1.display();

   Person p2(22,"Nikhil");
   p2.display();

   p1.setPara(p2);
   p2.display();

   p1.setPara1(p2);
   p2.display();

   p1.setPara2(&p2);
   p2.display();


    return 0;
}

