#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(6);  // s=1 c=1
    v.push_back(1); // 2 2
    v.push_back(9);// 3 4
    v.push_back(10); // 4 4
    v.push_back(6);   //5 8
    v.push_back(1);  //6  8
    v.push_back(9);  //7 8
    v.push_back(10);  // 8 8
    v.push_back(6);   // 9 16
    v.push_back(1);  // 10 16
    v.push_back(9);  // 11 16
    v.push_back(10);  // 12 16
    v.push_back(6);  // 13  16
    v.push_back(1);   //14  16
    v.push_back(9);   // 15 16
    v.push_back(10);   //16  16
    v.push_back(6);     //17  32
    v.push_back(1);  //18  32
    v.push_back(9);   // 19  32
    v.push_back(10);    // 20 32
    v.push_back(6);     // 21 32
    v.push_back(1);     //22 32
    v.push_back(9);     //23 32
    v.push_back(10);    //24  32
    cout<<"Size is : "<<v.size()<<endl;
    cout<<"Capacity is : "<<v.capacity()<<endl;
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    cout<<"Size is : "<<v.size()<<endl;
    cout<<"Capacity is : "<<v.capacity();
    
}