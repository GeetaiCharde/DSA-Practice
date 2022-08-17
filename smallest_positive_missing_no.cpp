/*
You are given an array[] of N integer including 0. The task is to find the smallest positive 
number missing from an array.

INPUT: 
0 -9 1 3 -4 5

OUTPUT:2 
*/

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Array Size: ";
    cin>>n;

    int arr[n];
    cout<<"Array Element: ";
    for (int i=0; i<n; i++){
        cin>>arr[i];
    }

    const int N= 1e6 + 2;
    bool check[N];
    for(int i=0;i<N;i++){
        check[i]=0; // can be mark as false or 0.(0 can speed the code so use 0.)
    }

    for(int i=0; i<n; i++){
        if(arr[i]>=0){
            check[arr[i]]=1; // can be mark as true or 1.
        }
    }

    int ans=-1;
    for(int i=1; i<N; i++){
        if(check[i]==0){
            ans=i;
            break;
        }
    }
    cout<<"Missing element is: "<<ans<<endl;
    return 0; 
}