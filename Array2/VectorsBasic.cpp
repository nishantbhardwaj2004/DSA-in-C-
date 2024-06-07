#include<iostream>
#include<vector>
using namespace std;
int main (){
    vector<int> v;  // you need not to mention size
    // inserting / do not use []
    v.push_back(6);
    //cout<<v.size()<<endl;  // for size of array
     cout<<v.capacity()<<endl;  // it find real capacity
     v.push_back(1);
     //cout<<v.size()<<endl;
     cout<<v.capacity()<<endl;
    //v[1]=1; // not always true
    v.push_back(9);
    //cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;
    v.push_back(0);
    //cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;

    // if you want to update / access use []
    //cout<<v[0]<<" ";
    //cout<<v[1]<<" ";
    //cout<<v[2]<<" ";
     //cout<<v[3]<<" ";
}