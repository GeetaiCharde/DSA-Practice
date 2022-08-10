#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Array size: ";
    cin>>n;

    int arr[n+1]; // array declaration
    arr[n]= -1; // nth element 

    //int arr[n];
    cout<<"Array Element: ";
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }

    if(n==1){
        cout<<"1"<<endl;
        return 0;
    }
    int ans = 0; //answer
    int mx=-1; // maximum

    for (int i=0; i<n; i++){
        if(arr[i]>> mx && arr[i]>>arr[i+1]){
            ans++;
        }
        mx= max(mx, arr[i]);
    }
    cout<< ans<< endl;
    return 0;

} 