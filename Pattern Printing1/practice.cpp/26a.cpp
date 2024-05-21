#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    int nsp=3;
    int nst=1;
    for(int i=1;i<=2*n-1;i++){
        for(int j=1;j<=nsp;j++){
             cout<<" ";
        }
       if(i<=n-1) nsp--;
       else nsp++;
        for(int k=1;k<=i;k++){
            cout<<"*";
        }
        if(i<=n-1) nst++;
        else nst--; 
       cout<<endl;
    }
}
