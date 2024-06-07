#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v(5,7);  //initial size=5 or each element have value also 7
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;
    cout<<v[4]<<endl;
    cout<<v[0];
}