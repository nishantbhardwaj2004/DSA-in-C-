#include<iostream>
using namespace std;

    void swap(int* x, int* y){
        int temp=*x;
        *x = *y;
        *y = temp;
        return;
    }
  /*int main(){
    int a,b;
    cin>>a>>b;
    swap(&a,&b); //int*x=&a  //   *x
    cout<<a<<" "<<b;    */
    
int main(){
    int a,b;
    cin>>a>>b;
    int*x=&a;
    int*y=&b;
    

    swap(&a,&b); //int*x=&a  //   *x
    cout<<a<<" "<<b;
}
