//Q.5 Write a C++ program to swap two numbers using a function swapNumbers that implements pass-by-reference. In the main function, input two numbers, call the swapNumbers function, and display the values before and after swappin

#include<iostream>
#include<cstring>


using namespace std;
class Math{

public:
int x;
int y;

 public:
 Math(){
    x=5;
    y=4;
 }
 Math(int x1,int y1){
    x=x1;
    y=y1;
   
 }
 void setx(int x1){
    x=x1;
 }
 int getx(){
    return x;
 }

 void sety(int y1){
    y=y1;
 }
 int gety(){
    return y;
 }
 
 void display(){
    cout<<"x:"<<x<<endl;
    cout<<"y:"<<y<<endl;
 
 }
 
 void swap(int x,int y){
     int temp=x;
        x=y;
        y=temp;
 }
 void swap1(int &x,int &y){
    int temp=x;
        x=y;
        y=temp;
 }
 void swap2(int *x,int *y){
    int temp=*x;
        *x=*y;
        *y=temp;
 }

};

int main(){
   
   Math m;
   m.display();
  

   int a=2,b=3;
    m.swap(a,b);
    printf("\n");
    cout<<"a:"<<a<<endl;
    cout<<"b:"<<b<<endl;

    int x=2,y=3;
    m.swap1(x,y);
    printf("\n");
    cout<<"x:"<<x<<endl;
    cout<<"y:"<<y<<endl;

    int p=5,q=9;
    m.swap2(&p,&q);
    printf("\n");
    cout<<"p:"<<p<<endl;
    cout<<"q:"<<q<<endl;


     return 0;
}















