#include<iostream>
#include<climits>
using namespace std;

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

    int currSum = 0;   //kadane's algorithm
    int maxSum = INT_MIN;
    for(int i=0;i<n;i++){
        currSum += arr[i];
        if(currSum<0){
            currSum=0;
        }
        maxSum = max(maxSum, currSum); // -||-
    }
    cout<<"Maz sum is: "<<maxSum;
    return 0;
}