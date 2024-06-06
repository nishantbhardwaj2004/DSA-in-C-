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
    int min = arr[0]; ;
    for(int i=1;i<=n-1;i++){
    if(min>arr[i])  min=arr[i];
    }
     cout<<"Minimum value is :"<<min<<endl;
    }

