#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Array size: ";
    cin>>n;
    int arr[n];
    cout<<"Enter array element: ";
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }

    int mx= -9999999;
    for (int i=0;i<n;i++){
        mx =max(mx,arr[i]);
        cout<<"Maximum number is: "<<mx<<endl;
        }
    cout <<"\nFinal maximum number is: "<<mx<<endl;
return 0;

}