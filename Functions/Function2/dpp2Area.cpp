#include<iostream>
using namespace std;
float Area(float r){
    return 3.14*r*r;
}
int main(){
    float r;
    cout<<"Enterradius :";
    cin>>r;
    cout<<Area(r)<<endl;
}
