#include<iostream>
#include<cstring>

using namespace std;
class Student{

private:
int id; //data members
string name;
int marks;
string subject;
string emailId;

public:
Student(){
id = 10;
name = "null";
marks = 90;
subject = "C++";
emailId = "abc.xyz@gmail.com";
}
Student(int id1,string name1,int marks1,string subject1,string
emailId1){
id = id1;
name = name1;
marks = marks1;
subject = subject1;
emailId = emailId1;
}
~Student(){
cout<<"Object is deleted"<<endl;
}

void setId(int id1){
id = id1;
}
int getId(){
return id;
}
void setName(string name1){
name = name1;
}
string getName(){

return name;
}
void setSubject(string subject1){
subject = subject1;
}
string getSubject(){
return subject;
}
void setMarks(int marks1){
marks = marks1;
}
int getMarks(){
return marks;
}
void setEmailId(string emailId1){
emailId = emailId1;
}
string getEmailId(){
return emailId;
}
void display(){
cout<<"Id:"<<" "<<id<<endl;
cout<<"Name:"<<" "<<name<<endl;
cout<<"Subject:"<<" "<<subject<<endl;
cout<<"Marks:"<<" "<<marks<<endl;
cout<<"EmailId:"<<" "<<emailId<<endl;
}
};

int main(){
/*
  int a;

cout<<"Enter the value"<<endl;

cin>>a;

cout<<"a:"<<a<<endl;

*/

/*
s1.id = 10;
s1.name = "snehal";
s1.marks = 90;


s1.subject = "Java";
s1.emailId = "snehal.patil@bitcode.in";
*/
/*
Student s1;
s1.setId(10);
s1.setName("Snehal");
s1.setMarks(80);
s1.setSubject("java");
s1.setEmailId("snehal.patil@bitcode.in");

s1.display();

cout<<"Name:"<<s1.getName()<<endl;

*/
Student s2;
s2.display();

Student s3(10,"Aditya",80,"Python","aditya.joshi@gmail.com");
s3.display();

Student s4(11,"Neha",81,"SQL","neha.jadhav@gmail.com");
s4.display();

return 0;

}