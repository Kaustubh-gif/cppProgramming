#include<iostream>
#include<cstring>

using namespace std;

class Maths1{
  private:

     int x;
     int y;
     int r;
     int w;

  public:
    Maths1(){
       x = 10;
       y = 5;
       r = 10;
       w = 15;
    }
    Maths1(int x1,int y1,int r1,int w1){
       x = x1;
       y = y1;
       r = r1;
       w = w1;
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
    void setW(int w1){
       w = w1;
    }
    int getW(){
       return w;
    }
    int add(int x,int y){
       return x+y;
    }
    int add(int x,int y,int r){
       return x+y+r;
    }
    int add(int x,int y,int r,int w){
       return x+y+r+w;
    }
    float add(float a,int b){
       return a+b;
    }
   

};

int main(){

   Maths1 c1(10,20,30,50);
  // c1.add(10,20);
  cout<<c1.add(10,20)<<endl;
  cout<<c1.add(10,20,30)<<endl;
  cout<<c1.add(10,20,30,40)<<endl;
  cout<<c1.add(11.44f,11)<<endl;






   return 0;
}

