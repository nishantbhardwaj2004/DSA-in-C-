#include<iostream>
using namespace std;
int main(){
    int n,l=0,sum=0,temp;
    cout<<"Enter the number : ";
    cin>>n;
    temp=n;
    while(n>0){
    l=n%10;
    sum+=(l*l*l);
    n/=10;
}
if(temp==sum) cout<<"Enter number is a Armstrong number ";
else cout<<"Not a Armstrong number ";
}