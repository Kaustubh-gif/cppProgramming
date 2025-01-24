#include<iostream>
#include<cstring>

using namespace std;
void rev(int& num1,int& num2,int& num3);

int main(){

    int num1;
    int num2;
    int num3;

    cout<<"Enter a number: ";
    cin>>num1>>num2>>num3;

    rev(num1,num2,num3);

    cout<<"rev: "<<num1<<" "<<num2<<" "<<num3<<endl;

    
       
    return 0;
}




