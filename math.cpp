#include<iostream>
#include<cstring>

using namespace std;

class Math{
    private:
           int x;
           int y;

    public:
    Math(){
        x = 10;
        y = 20;
    }
    Math(int x1, int y1){
        x = x1;
        y = y1;
    }
    void setx(int x1){
        x = x1;
    }
    int getx(){
        return x;
    }
    void sety(int y1){
        y = y;
    }
    int gety(){
        return y;
    }
    void display(){
        cout<<"x: "<<x<<endl;
        cout<<"y: "<<y<<endl;
    }
    void swap(int x, int y){
        int temp = x;
        x = y;
        temp = y;
    }
    void swap(int* x,int* y ){
        int temp = *x;
        *x = *y;
        *x = temp;
    }
    void swap(int & x, int & y){
        int temp = x;
        x = y;
        temp = y;
    }
};
 int main(){

    Math p1;
    p1.display();

    Math p2(30,40);
    p2.display();

    p1.swap();
    p1.display();

    p2.swap();
    p2.display(

   return 0;
}




