#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"ENter no. of students :";
    cin>>n;
    cout<<"Enter marks of students :"<<endl;
    int marks[n];  // 0 to n-1
    //input marks from user
for(int i=0;i<=n-1;i++){
    cin>>marks[i];
}
// Output of marks whom get less than 35 marks
for(int i=0;i<=n-1;i++){
    if(marks[i]<35) cout<<i<<" ";
}
}