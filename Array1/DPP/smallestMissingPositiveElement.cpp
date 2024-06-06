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
    // int x=0;
    // bool flag =false;
    // for(int i=0;i<n;i++){
    //     if(arr[i]!=x){
    //         cout<<x<<endl;
    //         flag =true;
    //         break;
    //     }
    //     else x++;
    // }
    // if(flag ==false) cout<<x<<endl;
    // return 0;

    bool flag=false;
    for(int i=0;i<n;i++){
        if(arr[i]!=i+1){
            flag =true;
            cout<<i+1;
            break;
        }
    }

        if(flag==false){
            cout<<"There is no missing element";
        } 
    }
    



