#include<iostream>
#include<cstring>

using namespace std;
class person{

private:
//data members
string name;
int age;

public:
person(){

name = "null";
age = 90;
}
person(string name1,int age1){

name = name1;
age = age;

}
~person(){
cout<<"Object is deleted"<<endl;
}

void setName(string name1){
name = name1;
}
string getName(){
return name;
}

void setage(int age1){
age = age1;
}
int getage(){
return age;
}
void display(){

cout<<"Name:"<<" "<<name<<endl;

cout<<"age:"<<" "<<age<<endl;

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

s1.name = "sss";
s1.age = 90;

*/
/*
s1.setName("Sss");
s1.age(80);

s1.display();

cout<<"Name:"<<s1.getName()<<endl;

*/

return 0;

}