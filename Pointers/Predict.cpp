#include<iostream>
using namespace std;
// Predict 01
  int main(){
    int a=15;
    int *ptr=&a;
    //int b = ++*ptr;
    int b = (*ptr)++;
    cout<<a<<" "<<b;
}