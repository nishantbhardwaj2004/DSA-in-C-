#include<iostream>
using namespace std;
int Square(int n){
    return n*n;
}
int main(){
    int n;
    cout<<"Enter number :";
    cin>>n;
    for(int i=1;i<=n;i++){
    cout<<Square(i)<<endl;
}
}