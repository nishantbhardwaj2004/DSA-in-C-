#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    for(int i=1;i<=n;i++){
        //spaces
        for(int j=1;j<=n+1-i;j++){
             cout<<" ";
        }
        for(int k=1;k<=i;k++){
             cout<<(char)(k+64);
        }
        cout<<endl;
    }
}
