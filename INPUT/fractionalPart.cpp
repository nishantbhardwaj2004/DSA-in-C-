#include <iostream>
using namespace std;
int main(){
    float a;
    cin>>a; //9.5
    int y=(int)a;   //y=9
    if (y<0) y=y-1;    // if negative
    float z =(float)y;  //z=9
    a =  a-z;
    cout<<a;
}