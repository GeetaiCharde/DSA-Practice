/* 2D MATRIX SEARCH
Give a nxm matrix.
Write an algorithm to find that the given value exist in matrix or not.
Integers in each row are sorted in ascending form left to right.
Integers in each column are sorted in ascending from top to bottom.

INPUT: 
1 2 3
4 5 6
7 8 9

OUTPUT
5: true
20: false

*/

// if we use brout fource algo then TC will be O(nm) so we will try another way

#include<iostream>
using namespace std;

int main()
{
    int n,m;
    cout<<"Enter no. of rows: ";
    cin>>n;
    cout<<"Enter no. of column: ";
    cin>>m;



    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }

    int target;
    cout<<"Enter searched element: ";
    cin>>target;

    int r=0, c=m-1;
    bool found = false;
    while(r<n && c>=0){
        if(arr[r][c]==target){
            found = true;
        }
        if(arr[r][c] > target){
            c--;
        }
        else{
            r++;
        }
    }

    if(found){
        cout<<"Element found";
    }
    else{
        cout<<"Element not found";
    }

return 0;
}

