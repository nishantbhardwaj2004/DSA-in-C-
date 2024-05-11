#include <iostream>
using namespace std;
int main(){
    cout<<"Enter number A = ";
    int A;
    cin>>A;
    cout<<"Enter number B = ";
    int B;
    cin>>B;
    cout<<"Enter number C = ";
    int C;
    cin>>C;
    if(A>B && A>C){
        cout<<"The number A is Greater";
    }
    if(B>A && B>C){
        cout<<"The number B is Greater";
    }
else {
    cout<<"The number C is  Greater";
}
    
}
