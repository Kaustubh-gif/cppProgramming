#include<iostream>
#include<cstring>
using namespace std;

int main(){
    string * ptr;

    ptr = new string[5];
   for(char i = 0; i < 5; i++){
        cin>>ptr[i];
    }

    for(char i = 0; i < 5; i++){
        cout<<ptr[i]<<" "<<endl;
    }

    delete [] ptr;



    return 0;
}








