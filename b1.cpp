#include<iostream>
#include<cstring>
using namespace std;

class BankAccount{

private:
int id;
string IFSCCode;
string name;
int bal;            //properties of class


public:
BankAccount(){
id = 100;
IFSCCode = "SBI267352762";
name = "Sakshi";
bal = 10000;
}

BankAccount(int id1,string IFSCCode1,string name1,int bal1){
id = id1;
IFSCCode = IFSCCode1;
name = name1;
bal = bal1;
}
void setId(int id1){
if(id1 < 0){
return;
}
id = id1;
}
int getId(){
return id;
}
void setIFSCCode(string IFSCCode1){
IFSCCode = IFSCCode1;
}
string getIFSCCode(){
return IFSCCode;
}
void setName(string name1){
name = name1;
}
string getName(){
return name;
}
void setBalance(int bal1){
bal = bal1;
}
int getBalance(){
return bal;
}
void display(){
cout<<"id: "<<id<<endl;
cout<<"IFSCCode: "<<IFSCCode<<endl;
cout<<"Name: "<<name<<endl;
cout<<"Bal: "<<bal<<endl;
}
};

int main(){


BankAccount b1;
b1.display();

BankAccount b2;
b2.display();

BankAccount b3(10,"ICIC9298397","Sandeep",15000);
b3.display();

BankAccount b4(11,"BOI83783483268","Sushant",15000);
b4.display();
b4.setBalance(20000);
printf("\n");
b4.display();

cout<<b4.getId()<<endl;

// b3.name = "shreyas";
b3.setName("Sandeep Oval");
printf("\n");
b3.display();
b3.setId(90);

b3.display();



return 0;
}