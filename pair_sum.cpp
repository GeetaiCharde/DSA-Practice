// Check if there exist two element in an array such that their sum is equal to given k.

#include<iostream>
#include<climits>
using namespace std;

/* brut force method
time complexity of this method is = O(n^2) .....(too large)
so we will use optimize way, where we will linearly traverse the array. TC = O(n)

bool pairsum(int arr[], int n, int k)
{
    for (int i=0;i<n-1; i++){
        for (int j=i+1; j<n; j++){
            if(arr[i]+arr[j]==k){
                cout<<i<<" "<<j<<endl;
                return true;
            }
        }
    }
    return false;
}*/

bool pairsum(int arr[], int n, int k)
{
    int low =0;
    int high = n-1;

    while(low<high){
        if(arr[low]+arr[high]==k){
            cout<<low<<" "<<high<<endl;
            return true;
        }
        else if (arr[low]+arr[high]>k){
            high --;
        }
        else{
            low++;
        }
    }
    return false;
}

int main()
{
    int n;
    cout<<"Array Size: ";
    cin>>n;

    int arr[n];
    cout<<"Array element: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cout<<"Enter K: ";
    cin>>k;

cout<<pairsum(arr,n,k)<<endl;

}