#include <iostream>
using namespace std;
void startriangle(int x){
    for(int i=1;i<=x;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
 
 int main(){
    startriangle(3);
    //cout<<"Hello World";
    startriangle(4);
  //  cout<<"Hello Pw";
    startriangle(5);
   // cout<<"Hello Nishant Bhardwaj";

 }

