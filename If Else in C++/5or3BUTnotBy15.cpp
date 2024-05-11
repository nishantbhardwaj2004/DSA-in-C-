#include <iostream>
using namespace std;
int main(){
    cout<<"Enter a number = ";
    int n;
    cin>>n;
    /*if((n%3==0 || n%5==0)  && (n%15!=0)){
        cout<<"Number is divisible by 3  and  5 but not by 15";
    }
    else{
        cout<<"Not matching the conditions";
    }
} */
if(n%3==0 || n%5==0){
    if(n%15!=0){
        cout<<"Number is divisible by 3  and  5 but not by 15";
    }
    else{
        cout<<"Not matching the conditions";
    }
}
else{
        cout<<"Not matching the conditions";
    }
}