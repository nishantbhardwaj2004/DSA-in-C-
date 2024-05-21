#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Number of sides :";
    cin>>n;
    /*int m;
    cout<<"Number of columns :";
    cin>>m;*/
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
         cout<<"*";
        }
        cout<<endl;
 }   
}