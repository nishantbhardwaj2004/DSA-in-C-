#include <iostream>
using namespace std;
int main(){
    cout<<"Enter side A = ";
    int A;
    cin>>A;
    cout<<"Enter side B = ";
    int B;
    cin>>B;
    cout<<"Enter side  C = ";
    int C;
    cin>>C;
    if((A+B>C)  && (B+C>A)  && (C+A>B)){
    cout<<"These are the sides of triangle";
    }
    else{
        cout<<"Invalid Triangle";
    }

      }
    

    

