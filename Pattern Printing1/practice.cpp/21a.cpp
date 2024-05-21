#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    int nsp=2;
    int m=n-2;
    for(int i=1;i<=m;i++){
        for(int j=1;j<=m;j++){
             cout<<"*";
        }
        nsp;
         for(int k=1;k<=nsp;k++){
             cout<<" ";
        }

        cout<<endl;
    }
}