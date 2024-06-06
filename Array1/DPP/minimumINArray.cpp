#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of array:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }

    //main part
   int min = arr[0];
   for(int i=0;i<n;i++){
    if(arr[i]<min) min=arr[i];
   }
//    int smin=arr[0];
//    for(int i=0;i<n;i++){
//     if(arr[i]<smin && arr[i]!=min) smin=arr[i];
//    }

   cout<<min<<endl;
   //cout<<smin;


}