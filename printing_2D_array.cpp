#include<iostream>
using namespace std;

int main()
{
    int n,m;
    cout<<"Enter no. of rows: ";
    cin>>n;
    cout<<"Enter no. of collum: ";
    cin>>m;

    int arr[n][m];
    for(int i=0; i<n;i++){
        for(int j=0; j<m; j++){
            cin>>arr[i][j];
        }
    }

    cout<<"Entered matrix is: \n";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }

    return 0;
}