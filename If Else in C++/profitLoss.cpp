#include <iostream>
using namespace std;
int main(){
    int Profit;
    int Loss;
    cout<<"Enter CP :";
    int CP;
    cin>>CP;
    cout<<"Enter SP :";
    int SP;
    cin>>SP;
    if(SP>CP){
        cout<<"Profit=60";
        Profit = SP - CP;
        cout<<Profit;
    }
    if(SP<CP){
        cout<<"Loss=";
         Loss = CP - SP;
        cout<<Loss;
    }
    if(SP==CP){
        cout<<"NO Profit , NO loss!";
    }
}