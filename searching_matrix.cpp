#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cout<<"Enter row length: ";
    cin>>n;
    cout<<"Enter collum length: ";
    cin>>m;

    int arr[n][m];

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }


    cout<<"Matrix is: \n";
    for (int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }

    int key;
    cout<<"Enter key element: ";
    cin>>key;

    bool flag = false;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j]==key){
                cout<<"Element found at:"<<i<<" "<<j<<"\n";
                flag = true;
            }
        }
    }

    if(flag){
        cout<<"successful \n";
    }
    else{
        cout<<"Fail \n";
    }
    return 0;


}