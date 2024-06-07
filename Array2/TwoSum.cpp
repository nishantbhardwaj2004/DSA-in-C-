#include<iostream>
#include<vector>
using namespace std;
int main(){
    int x;
    cout<<"ENter Target :";
    cin>>x;
    vector<int> v;
    int n;
    cout<<"Enter array Size :";
    cin>>n;

    cout<<"Enter array Element :";
    for(int i=0;i<n;i++){
        int q;
        cin>>q;
        v.push_back(q);
        //cout<<v[i]<<" ";
    }

    for(int i=0;i<=v.size()-2;i++){
        for(int j=i+1;j<=v.size()-1;j++){
            if(v[i]+v[j]==x) {
                cout<<"("<<i<<","<<j<<")"<<endl;
            }
        }
    }
 }