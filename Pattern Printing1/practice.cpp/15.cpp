#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of rows : ";
    cin>>n;
    for(int i=1;i<=n;i++){
        //hases
        for(int j=1;j<=n-i;j++){ //  ->(n+1-i)
           cout<<" ";
        }
        //stars
        for(int k=1;k<=i;k++){
             cout<<k;
            }
        cout<<endl;
    }
}