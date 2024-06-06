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
    int max = arr[0]; ;
    for(int i=1;i<=n-1;i++){
    if(max<arr[i])  max=arr[i];
    }

    int smax = arr[0]; ;
    for(int i=1;i<=n-1;i++){
    if(arr[i] != max  &&  smax<arr[i])  smax=arr[i];
    }
    cout<<"1st max :"<<max<<endl;
    cout<<"2nd max :"<<smax;
    }