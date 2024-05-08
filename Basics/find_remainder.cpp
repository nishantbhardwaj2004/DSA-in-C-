#include <iostream>
using namespace std;
int main (){
    int a=11;
    int b=3;
    int r;
    int q;
    q=a/b;
    //a=(b*q)+r;
    r=a-(b*q);
    cout<<r;
    //easy method  to find remainder
    /*r=a%b;
    cout<<r;*/
}