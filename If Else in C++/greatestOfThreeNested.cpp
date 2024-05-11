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
    if(A>B){
        if(A>C){
        cout<<"The number A is Greater";
      }
      else{  // c>a  , a>b -> C>B>A
        cout<<"The number C is greatest";
      }
      }
      else{  // b>a
         if(B>C){
            cout<<"The number B is greatest";
         }
         else {
            cout<<"The number C is greatest";
            
         }
         }

      }
    

    

