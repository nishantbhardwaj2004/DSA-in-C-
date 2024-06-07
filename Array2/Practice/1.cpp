// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int> v;
//     int n;
//     cin>>n;
//     int a;
//     cout<<"Enter to be check :";
//     cin>>a;
//     for(int i = 0;i<n;i++){
//         int x;
//         cin>>x;
//         v.push_back(x);
//     }
//     int idx = -1;
//     for(int i = v.size()-1;i>=0;i--){
//         if(v[i]==a) {
//          idx = i;
//          break;
//         }
//     }
//     cout<<idx;
// }




// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int> v;
//     int n;
//     cout<<"Enter Size of array :";
//     cin>>n;
//     //target
//     int a;
//     cout<<"Enter Target :";
//     cin>>a;

//     for(int i = 0;i<n;i++){
//         int x;
//         cin>>x;
//         v.push_back(x);
//     }
//     int idx = -1;
//     for(int i=v.size()-1;i>0;i--){
//         if(v[i]==a){
//             idx = i;
//             break;
//         }
//     }
//     cout<<idx;
// }



// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int> v;
//     int n;
//     cout<<"Enter Size of Array :";
//     cin>>n;
//     // input array
//     for(int i=0;i<n;i++){
//         int x;
//         cin>>x;
//         v.push_back(x);
//     }
//     //target
//     int x;
//     cout<<"Enter Target :";
//     cin>>x;
//     // main loop
//     for(int i =0;i<=v.size()-2;i++){
//         for(int j =i+1;j<=v.size()-1;j++){
//             if(v[i]+v[j]==x) {
//                 cout<<"("<<i<<","<<j<<")"<<endl;
//             }
//         }
//     }
// }



// Copy Element of an array in another array in reverse order
// #include<iostream>
// #include<vector>
// using namespace std;
// void display(vector<int>& a){
//     for(int i = 0;i<a.size();i++){
//         cout<<a[i]<<" ";
//     }
//     cout<<endl;
// }
// int main(){
//     vector<int> v1;
//     v1.push_back(2);
//     v1.push_back(5);
//     v1.push_back(7);
//     v1.push_back(1);
//     v1.push_back(8);
//     v1.push_back(4);

//     display(v1);

//     vector<int> v2(v1.size());
//     for(int i = 0;i<v2.size();i++){
//         // i+j = size -1
//         int j = v1.size()-1-i;
//         v2[i]=v1[j];
//     }
//     display(v2);
    
//}

//Reverse an array without using another array
// #include<iostream>
// #include<vector>
// using namespace std;
// void display(vector<int>& a){
//     for(int i=0;i<a.size();i++){
//         cout<<a[i]<<" ";
//     }
// }
// int main(){
// //    int n;
// //    cout<<"Enter Size of array :";
// //    cin>>n;
//    vector<int> v;
//    v.push_back(8);
//    v.push_back(2);
//    v.push_back(6);
//    v.push_back(3);
//    v.push_back(1);
//    v.push_back(7);

//    display(v);
//    cout<<endl;

//    int i =0;
//    int j = v.size()-1;
//    while(i<=j){
//     swap(v[i],v[j]);
//     i++;
//     j--;
//    }
//    display(v);
//  }


// Reverse Part of an array
// #include<iostream>
// #include<vector>
// using namespace std;

// void display(vector<int>& v){
//     for(int i=0;i<v.size();i++){
//         cout<<v[i]<<" ";
//     }
// }

// void reversePart(int i , int j , vector<int>&v){
//     while(i<=j){
//         swap(v[i],v[j]);
//         i++;
//         j--;
//     }
// }

// int main(){
//     vector<int> v;
//     int n;
//     cout<<"Enter Size of an array :";
//     cin>>n;
//     //vector<int> v;
//     for(int i=0;i<n;i++){
//         int x;
//         cin>>x;
//         v.push_back(x);

//     }
//     reversePart(0,2,v);
//     display(v);

// }

// #include<iostream>
// #include<vector>
// using namespace std;
// void display(vector<int>& v){
//     for(int i =0;i<v.size();i++){
//         cout<<v[i]<<" ";
//     }
// }
// void reversePart(int i,int j,vector<int>& v){
//     while(i<=j){
//         swap(v[i],v[j]);
//         i++;
//         j--;
//     }
// }
// int main(){
//     vector<int> v;
//         int n;
//         cout<<"Enter size of array :";
//         cin>>n;
        
//         for(int i=0;i<n;i++){
//             int x;
//             cin>>x;
//             v.push_back(x);
//         }
//         int k;
//         cout<<"How many times rotate :";
//         cin>>k;
//         if(k>n) k = k%n;
        
//         reversePart(0,n-k-1,v);
//         reversePart(n-k,n-1,v);
//         reversePart(0,n-1,v);
//         display(v);
// }


// rotate k times an array
// #include<iostream>
// #include<algorithm>
// #include<vector>
// using namespace std;
// void display(vector<int>& v){
//     for(int i=0;i<v.size();i++){
//         cout<<v[i]<<" ";
//     }
// }
// void reversePart(int i,int j,vector<int>& v){
//     while(i<=j){
//         swap(v[i],v[j]);
//         i++;
//         j--;
//     }
// }
// int main(){
//     vector<int> v;
//     int n;
//     cout<<"Enter size of array :";
//     cin>>n;
//     for(int i=0;i<n;i++){
//         int x;
//         cin>>x;
//         v.push_back(x);
//     }
//     int k;
//     cout<<"How many times you want to rotate array :";
//     cin>>k;
//     if(k>n) k=k%n;
    
//     reversePart(0,n-k-1,v);
//     reversePart(n-1,n-1,v);
//     reversePart(0,n-1,v);
//     display(v);
// }
// #include<iostream>
// #include<algorithm>
// #include<vector>
// using namespace std;
// void display(vector<int>& v){
//     for(int i=0;i<v.size();i++){
//         cout<<v[i]<<" ";
//     }
// }
// int main(){
//     vector<int> v;
//     int n;
//     cout<<"Enter size of array :";
//     cin>>n;
//     for(int i=0;i<n;i++){
//         int x;
//         cin>>x;
//         v.push_back(x);
//     }
//     int no0=0;
//     int no1 =0;
//     int no2=0;
//     for(int i=0;i<n;i++){
//         if(v[i]==0) no0++;
//         else if(v[i]==1)  no1++;
//         else  no2++;
//     }
//     //filling
//     for(int i=0;i<n;i++){
//         if(i<no0) v[i]=0;
//         else if(i<(no0+no1))  v[i]=1;
//         else v[i]=2;
//     }
//     display(v);

    
// }

// DPP -01 larger than x count that element
// #include<iostream>
// #include<algorithm>
// #include<vector>
// using namespace std;
// void display(vector<int>& v){
//     for(int i=0;i<v.size();i++){
//         cout<<v[i]<<" ";
//     }
// }

// int main(){
//     vector<int> v;
//     int n;
//     cout<<"Enter size of array :";
//     cin>>n;
//     for(int i=0;i<n;i++){
//         int x;
//         cin>>x;
//         v.push_back(x);
//     }
//     int x;
//     cout<<"Enter element to be check:";
//     cin>>x;
     

//     int count =0;
//     for(int i=0;i<n;i++){
//         if(v[i]>x) count++;
//     }
//     cout<<count;
// }

// DPP - 02  larger three element of array
// #include<iostream>
// #include<algorithm>
// #include<climits>
// #include<vector>
// using namespace std;
// void display(vector<int>& v){
//     for(int i=0;i<v.size();i++){
//         cout<<v[i]<<" ";
//     }
// }



// DPP  - 02 Max THree NUMBERS
// int main(){
//     vector<int> v;
//     int n;
//     cout<<"Enter size of array :";
//     cin>>n;
//     for(int i=0;i<n;i++){
//         int x;
//         cin>>x;
//         v.push_back(x);
//     }
//     int fmax = INT_MIN;
    
   
//     // first max
//     for(int i=0;i<n;i++){
//         if(v[i]>fmax) fmax=v[i];
//         }
//         // second max
//     int smax = INT_MIN;
//     for(int i=0;i<n;i++){
//         if(v[i]!=fmax && v[i]>smax) smax=v[i];
//         }

//     int tmax = INT_MIN;
//     for(int i=0;i<n;i++){
//         if(v[i]!=fmax && v[i]!=smax && v[i]>tmax) tmax=v[i];
//         }

//     cout<<fmax<<" ";
//     cout<<smax<<" ";
//     cout<<tmax;
     
// }


//DPP- 03   difference between even and odd indices element
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int> v;
//     int n;
//     cout<<"Enter size of array :";
//     cin>>n;
//     //input in vector
//     for(int i=0;i<n;i++){
//         int x;
//         cin>>x;
//         v.push_back(x);
//     }

//     int Esum  = 0;
//     int Osum = 0;
//     int difference ;
//     for(int i=0;i<n;i++){
//         if(v[i]%2==0)  Esum = Esum+v[i];
//         else Osum = Osum+v[i];
//     }
//     difference = abs(Esum - Osum);
//     cout<<difference;

// }

//DPP -5  change even and odd indices value by 2*  and 10 respectively
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int> v;
//     int n;
//     cout<<"Enter size of array :";
//     cin>>n;
//     //input in vector
//     for(int i=0;i<n;i++){
//         int x;
//         cin>>x;
//         v.push_back(x);
//     }
//     for(int i=0;i<v.size();i++){
//         if(v[i]%2==0)  v[i]=10;
//         else v[i]=2*v[i];
//     }
//     for(int i=0;i<v.size();i++){
//         cout<<v[i]<<" ";
//     }

// }

//DPP - 06  FInd the element which is not present twice in array
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    int n;
    cout<<"Enter size of array :";
    cin>>n;
    //input in vector
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    int count;
    for(int i=0;i<n;i++){
        int count=0;
        for(int j=i+1;j<n;j++){
            if(v[i]==v[j ]) count++;
        }
    }
    int i;
    int j;
    if(count<2 && count >2){
        cout<<v[i]<<" ";
    }

}