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
       y = 20;
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
       cout<<"x: "<<x<<endl;
       cout<<"y: "<<y<<endl;
       cout<<"r: "<<r<<endl;
      }
};
int main(){

   Circle c1(10,15,6);
   c1.display();

   Circle& c2 = c1;

   c2.setX(10);
   c2.setY(20);
   c2.setR(30);

   printf("\n");

   c1.display();

   Circle * cptr = &c1;

   cptr->setX(11);
   cptr->setY(12);
   cptr->setR(5);

    printf("\n");

   c1.display();


   return 0;
}
