#include <iostream>
using namespace std;
void display(int a[] , int size){   // int*a
    for(int i=0;i<=size-1;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return;
}
void change(int b[] , int size){   // int*b;
    b[0]=100;
}
int main(){
    int arr[] = {1,5,6,3,9};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<size<<endl;
    //accessing the elements of array in another function
    // updation of Array, Pass by Value / reference?
    display(arr,size);
    change(arr,size);
    display(arr,size);
}