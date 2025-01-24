#include<iostream>
#include<cstring>
using namespace std;

class Circle{
    private:
      int x;
      int y;
      int r;



      public:

       Circle(int x1,int y1,int r1){
        x = x1;
        y = y1;
        r = r1;
       }

       

       void display(){
        cout<<x<<" "<<y<<" "<<r<<endl;
       }
};
int main(){

   Circle c1(10,20,30);
   c1.display();
    return 0;
}