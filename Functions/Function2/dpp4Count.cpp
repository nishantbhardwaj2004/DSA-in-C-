// Write a program to count no. of digits in a number and Calculate Square Of that number
#include<iostream>
using namespace std;
int Square(int n){
    int Square ;
    Square= n*n;
    return Square;
}
int CountDigit(int n){
    int count = 0;
    while(n>0){
        n/=10;
        count++;
        //n/=10;
    }
    return count;
}
int main(){
    int n;
    cout<<"Enter Number :";
    cin>>n;
    cout<<CountDigit(n);
    cout<<endl;
    cout<<Square(n);

} 