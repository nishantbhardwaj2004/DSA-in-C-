 #include<iostream>
 using namespace std;
 void swap(int &a, int &b){    // Pass By Reference
        int temp=a;
        a = b;
        b = temp;
        return;
    }
int main(){
    int a,b;
   cin>>a>>b;
    swap(a,b); 
    cout<<a<<" "<<b;
}