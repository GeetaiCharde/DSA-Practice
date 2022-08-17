/* 
Given an unsorted array A of size N of non-negative integers, find a continuous subarray
which adds to a given numbers S.

INPUT:
N=5, S=12
A[]={1,2,3,7,5}

OUTPUT:2 4 

Explanation: The sum of elements from 2nd position to 4th
position is 12.*/

#include <iostream>
using namespace std;

int main()
{
    int n, sum;
    cout<<"Array size: ";
    cin>>n;
    cout<<"Sum: ";
    cin>>sum;
    int arr[n];
    cout<<"Array Element: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int i=0, j=0, start=-1, end=-1, current_sum=0;
    
    while (j<n && current_sum+arr[j]<=sum){
        current_sum += arr[j];
        j++;
    }
    if(current_sum == sum){
        cout<<i+1<<" "<<j<<endl;
        return 0;
    }
    while (j<n){
        current_sum += arr[j];
        while(current_sum>sum){
            current_sum -= arr[i];
            i++;
        }
        if(current_sum == sum){
            start = i+1;
            end = j+1;
            break;
        }
        j++;
    }
    cout<<start<<" "<<end<<endl;
}