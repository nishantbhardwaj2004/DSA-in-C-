#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    int nst=1;
    for(int i=1;i<=2*n-1;i++){
        for(int j=1;j<=nst;j++){
            cout<<"*";
        }
        if(i<=n-1) nst++;
        else nst--;
        cout<<endl;
    }
}