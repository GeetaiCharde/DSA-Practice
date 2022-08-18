/* 
Given a square matrix A and its numbers of rows (or columns) N. Return Treanspose of A.
The transpose of a matrix is a matrix flipped over its main diagonal, switching the row and column 
indices of the matrix.

INPUT: 
1 2 3
4 5 6
7 8 9

OUTPUT:
1 4 7
2 5 8
3 6 9
*/

#include<iostream>
using namespace std;

int main()
{
    int n, m;
    cout<<"Row length: ";
    cin>>n;
    cout<<"Column length: ";
    cin>>m;
    
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }

    //swap
    for(int i=0;i<n;i++){
        for(int j=i;j<m;j++){
           int temp = arr[i][j];
           arr[i][j] = arr[j][i];
           arr[j][i] = temp; 
        }
    }

    //print
    cout<<"Transpose matrix is: \n";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
}