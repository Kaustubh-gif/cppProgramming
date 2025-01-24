#include<iostream>
#include<cstring>

using namespace std;


class Circle{
  private:
     int x;
     int y;
     int r;

   public:

     Circle(){
       x = 10;
       y = 15;
       r = 5;
     }
     Circle(int x1,int y1,int r1){
       x = x1;
       y = y1;
       r = r1;
     }
     void setX(int x1){
       x = x1;
     }
     int getX(){
       return x;
     }
     void setY(int y1){
       y = y1;
     }
     int getY(){
       return y;
     }
     void setR(int r1){
       r = r1;
     }
     int getR(){
       return r;
     }
     void display(){
       cout<<x<<" "<<y<<" "<<r<<endl;
     }
     ~Circle(){

       cout<<"Circle object is deleted Successfully"<<endl;

     }
};
int main(){

   Circle * c1 = new Circle(); //by using the new operator and by using the default constructor

   c1->setX(10);
   c1->setY(15);
   c1->setR(20);

   c1->display();

   delete c1;

   Circle * c2 = new Circle(10,20,5);

   c2->display();

   delete c2;



   return 0;
}
