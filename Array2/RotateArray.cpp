#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>& a){
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
void reversePart(int i ,int j , vector<int>& v){
        while(i<=j){
        int temp =v[i];
        v[i] = v[j];
        v[j] = temp;
        i++;
        j--;
}
}

int main(){
    vector<int> v;
    int n=v.size();
    cin>>n;
   for(int i=0;i<n;i++){
        int q;
        cin>>q;
        v.push_back(q);
    }
    //display(v);
    int k;
    cout<<"Enter Value of k :";
    cin>>k;
    // rotating of array
   // int n = v.size();  //7
    if(k>n) k=k%n;
    reversePart(0,n-k-1,v);
    reversePart(n-k,n-1,v);
    reversePart(0,n-1,v);
    display(v); 
     }
