//Cumulitive Sum Approach

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
     int currsum[n+1];
     currsum[0] = 0;

    for(int i=1; i<=n; i++){
        currsum[i] = currsum[i-1] + arr[i-1]; 
    }

    int maxSum =INT_MIN; //global variable
    for(int i=1; i<=n; i++){
        int sum =0; //local variable
        for(int j=0; j<=n; j++){
            sum = currsum[i] - currsum[j]; 
            maxSum = max(sum, maxSum);  
        }

    }
cout<<"Max Sum is: "<<maxSum<<endl;

return 0;
}