#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of Array =";
    cin>>n;
    int arr[n];
    //input
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    int x;
    cout<<"Enter the element you want to search :";
    cin>>x;
    //OUTPUT SEARCH
    //CHECK MARK
    bool flag = false;   // false -> Not present
    for(int i=0;i<=n-1;i++){
         if(arr[i]==x)  flag  = true;
       }
       if(flag==true) cout<<"Element Found";
       else cout<<"Element Not Found";
         

}