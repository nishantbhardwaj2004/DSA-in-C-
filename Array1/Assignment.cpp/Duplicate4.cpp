// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter size of Array =";
//     cin>>n;
//     int arr[n];
//     //input
//     for(int i=0;i<=n-1;i++){
//         cin>>arr[i];
//     }
//    //OUTPUT SEARCH
//    int flag = false ;
//     for(int i=0;i<=n-1;i++){
//         for(int j=i+1;j<=n-1;j++)
//         if(arr[i]==arr[j])   flag=true;
//        }
//        if(flag==true) cout<<"Duplicate  Found";
//        else cout<<"Duplicate Not Found";
         

// }



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
   //OUTPUT SEARCH
   int flag = false ;
    for(int i=0;i<=n-1;i++){
        for(int j=i+1;j<=n-1;j++)
        if(arr[i]!=arr[j]){  
            cout<<arr[i]; 
            flag=true;
            //cout<<arr[i];
        }

       }
       if(flag==true) cout<<"Duplicate  Found";
       else cout<<"Duplicate Not Found";
         

}