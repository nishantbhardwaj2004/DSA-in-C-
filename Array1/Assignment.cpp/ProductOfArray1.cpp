#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the Size of Array :";
    cin>>n;
    int arr[n];
    //Input
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    //OUTPUT
    int product=1;
    for(int i=0;i<=n-1;i++){
         product = product * arr[i]; 
          }
          cout<<"Product of Array is :"<<product;

}