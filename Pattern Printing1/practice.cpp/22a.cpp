#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    for(int i=1;i<=n;i++){
        //Spaces
        for(int j=1;j<=n+1-i;j++){
         cout<<" ";
        }
        //stars
        for(int k=1;k<=n;k++){
           // for(int l=1;l<=k;l++){
            cout<<"*";
        }
        cout<<endl;
        }
            
    }
