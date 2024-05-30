#include<iostream>
using namespace std;
int main(){
    int x=7;
    int*ptr=&x;
    cout<<*ptr<<endl;  //   0x61ff08
    *ptr=*ptr+1;  
    cout<<*ptr;       //    0x61ff0c
}