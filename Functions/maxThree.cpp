#include <iostream>
using namespace std;
int maxthree(int a,int b,int c){
    if(a>b && a>c) return a;
    else if (b>a && b>c) return b;
    else return c;
}
int main(){
    int a=999,b=85,c=69;
    cout<<maxthree(a,b,c);
}