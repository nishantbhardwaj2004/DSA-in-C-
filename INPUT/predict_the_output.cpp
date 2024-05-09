#include <iostream>
using namespace std;
int main(){
    /*bool p=false;
    bool q=false;
    bool r=true;
    cout<<(p==q==r);*/ //calculation from left to right
    int p=1;
    int q=2;
    int r=2;
    cout<<(p==q==r);    //(p==q)- (0)==2 - 0
   // (p)==(q==r)- (1)==(2==2)  - (1)==(1)   -  1



}