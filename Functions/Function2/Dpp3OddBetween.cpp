#include<iostream>
using namespace std;
int OddNumber(int a , int b){
    for(int  i = a; i<=b;i++){
        if(i % 2!=0){
            cout<< i <<" ";
        }
    }
    return 0; ;
}

int main(){
    int a;
    cin>>a;
    int b;
    cin>>b;
    OddNumber(a,b);
} 