// #include<iostream>
// using namespace std;

// void StarTriangle(int x)
// {
//     for(int i=0;i<x;i++)
//         {
//             for(int j=0;j<i;j++)
//             {
//                 cout<<"*";
//             }
//             cout<<endl;
//         }
//}

// int sum (int x ,int y )
// {
//     return x+y;
// }

//Factorial of given number
// int fact(int x)
//{
//     int fact =1;
//     for(int i=2;i<=x;i++)
//     {
//         fact*=i;
//     }
//     return fact;
// }
// int main()

// {
//     int n;
//     cout<<"Enter n :";
//     cin>>n;
//     int r;
//     cout<<"Enter r :";
//     cin>>r;
//     int nfact = fact(n);
//     int rfact = fact(r);
//     int nrfact = fact(n-r);
//     int nCr = nfact / (rfact*nrfact);

//     int nPr = nfact /nrfact;

//     cout<<"Cobmination :"<<nCr<<endl;
//     cout<<"Permutation :"<<nPr;


    // int fact =1;
    // for(int i=2;i<=n;i++)
    // {
    //     fact*=i;
    // }
    // cout<<fact;
    // StarTriangle(3);
    // StarTriangle(4);
    // StarTriangle(5);
    // cout<<sum(2,3);

//}


//pascal Triangle
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
   
    for(int i=0;i<=n;i++)
    {
        int curr =1;
        for(int j=0;j<=i;j++)
        {
            cout<<curr<<" ";
            curr = curr*(i-j)/(j+1);
        }
        cout<<endl;
    }
}