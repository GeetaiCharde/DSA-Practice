#include <iostream>
using namespace std;

int main ()
{
    int n;
    cout<<"Array size: ";
    cin>>n;
    int arr[n];
    cout<<"Enter Array Element: ";
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    int current=0;
    for (int i=0;i<n;i++){
        current = 0;
        for (int j=i;j<n;j++){
            current += arr[j];
            cout<<current<<endl;
        }
    }
    return 0;
}