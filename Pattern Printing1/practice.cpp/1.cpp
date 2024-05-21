#include<iostream>
using namespace std;
int main(){
    int n;
    int m;
    cout<<"Enter number of rows : ";
    cin>>n;
    cout<<"Enter number of column : ";
    cin>>m;
    for(int i=1;i<=n;i++){
        for(int i=1;i<=m;i++){
        cout<<"*";
    }
        cout<<endl;
}
}