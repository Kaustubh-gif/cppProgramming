#include<iostream>
using namespace std;

void swap(int& a,int& b);

int main(){

   int a = 10;
   int b = 20;

   cout<<a<<endl;
   cout<<b<<endl;

   swap(a,b);

   printf("\n");
   cout<<a<<endl;
   cout<<b<<endl;

  
   return 0;
}
void swap(int& a,int& b){
   int temp;
   temp = a;
   a = b;
   b = temp;
}

