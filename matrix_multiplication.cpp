/*
Given two 2-D array of size n1Xn2 and n2Xn3. Your task is to multiply these matrices and output the 
multiplied matrix.

INPUT:
matrix_1      matrix_2
2 4 1 2       1 2 3
8 4 3 6       4 5 6
1 7 9 5       7 8 9
              4 5 6

OUTPUT:
33 42 51
69 90 111
112 134 156
*/

#include<iostream>
using namespace std;

int main()
{
    int n1, n2, n3;
    cout<<"Enter the value for n1: ";
    cin>>n1;
    cout<<"Enter the value for n2: ";
    cin>>n2;
    cout<<"Enter the value for n3: ";
    cin>>n3;

    int m1[n1][n2];
    int m2[n2][n3];

    // input for 1st matrix

    for(int i=0;i<n1;i++){
        for(int j=0;j<n2;j++){
            cin>>m1[i][j];
        }
    }
    cout<<"\n";
    //input for 2nd matrix

    for(int i=0;i<n2;i++){
        for(int j=0;j<n3;j++){
            cin>>m2[i][j];
        }
    }
    int ans[n1][n3]; //answer matrix
    //initalizing all values of 'ans' matrix as 0
    for(int i=0;i<n1;i++){
        for(int j=0;j<n3;j++){
            ans[i][j]=0;
        }
    }

    //logic for multiplication
    for(int i=0; i<n1; i++){
        for(int j=0;j<n3; j++){
            for(int k=0;k<n2;k++){
                ans[i][j] += m1[i][k]*m2[k][j];
            }
        }
    }

    // print ans matrix
    cout<<"Maltiplied matrix is: \n";
    for(int i=0;i<n1;i++){
        for(int j=0;j<n3;j++){
            cout<<ans[i][j]<<" ";
        }cout<<endl;
    }

    return 0;
}