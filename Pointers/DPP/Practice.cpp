#include<iostream>
using namespace std;
int main(){
    int x = 12;
    int* p1 = &x;
    int y = 23;
    int* p2 = &y;
    cout<<*p1 + *p2;
}