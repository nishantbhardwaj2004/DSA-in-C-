#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of Array =";
    cin>>n;
    int arr[n];
    cout<<"Enter elements of Array :"<<endl;
    //input
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    //OUTPUT
    int sum=0;
    for(int i=0;i<=n-1;i++){
        sum = sum + arr[i];
        }
         cout<<endl<<"Sum is ="<<sum;

}