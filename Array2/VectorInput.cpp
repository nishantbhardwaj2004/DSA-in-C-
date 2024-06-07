#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v; 
    int n;
    cin>>n;
    //Input   when size is not given to us
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    // OUTPUT
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
}