#include<iostream>
using namespace std;
int main(){
    int arr[]={4,3,6,2,7};
    int*ptr=arr;        // giving adress
    //cout<<ptr<<endl;
    //cout<<&arr[0];
   // ptr[3]=0;
    //cout<<ptr[0]<<endl;
    /* for(int i=0;i<=4;i++){
        cout<<ptr[i]<<" ";
    }
    cout<<endl; 
    *ptr = 8;  // ptr[0]=8;
    ptr++;  // ptr is poiting to 2nd element 
    *ptr=9;
    ptr--;  // ptr ism pointing to again 1st element
    *ptr=7;
    for(int i=0;i<=4;i++){
        cout<<ptr[i]<<" ";
    }  */
    for(int i=0;i<=4;i++){
        cout<<*ptr<<" ";
        ptr++;
    }
    ptr =arr;   //ptr[0]=8;  //ptr is pointing to 1st element 
    
}