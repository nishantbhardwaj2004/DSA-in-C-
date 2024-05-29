#include <iostream>
using namespace std;
void fun(int x,int y){
    cout<<"Address of x"<<" "<<&x<<endl;
    cout<<"Address of y"<<" "<<&y<<endl;

}
int main(){
    int x =3;
    int y= 2;
    cout<<"Address of x"<<" "<<&x<<endl;
    cout<<"Address of y"<<" "<<&y<<endl;
    fun(x,y);
}
