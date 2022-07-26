#include<iostream>
using namespace std;
int main ()
{
    int n; // array size
    cin>>n; // taking array size from user
    int array[n]; // defining array with user size

    for (int i=0; i<n; i++) // condition 
    {
        cin>>array[i]; // taking array element from user
    }

    for (int i=0; i<n; i++)
    {
        cout<<array[i]; // printing array
        if (i>=n-1){
             break;
        }
        else {
           cout<<',';
        }
    }
    
    return 0;

}