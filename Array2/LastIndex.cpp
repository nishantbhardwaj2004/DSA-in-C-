#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(3);
    v.push_back(9);
    v.push_back(4);
    v.push_back(7);
    v.push_back(6);
    v.push_back(98);
    v.push_back(42);
    v.push_back(78);
    int x=42; 
    int idx = -1;
    //for(int i=0;i<v.size();i++){
    //    if(v[i]==x)  idx= i;
    //}
    for(int i=v.size()-1;i>0;i--){
       if(v[i]==x)  {
       idx= i;
       break;
    }
    }
    cout<<idx;
}