#include <iostream>
using namespace std;
int main(){
    cout<<"Enter a number = ";
    int n;
    cin>>n;
    if(n%3==0 && n%5==0){
        cout<<"Number divisible by 3  and  5";
    }
    else{
        cout<<"Number is not divisible by 3  and  5";
    }
}