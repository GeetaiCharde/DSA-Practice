// must read the comment 
#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int array [n];
    for (int i=0; i<n; i++)
    {
        cin>>array[i];
    }
    int maxNo = INT_MIN; // INT_MIN is the possible min element of the array. for this we need to include climits lib.
    int minNo = INT_MAX;

    for (int i=0; i<n; i++)
    {
        if (array[i]>maxNo)
        {
            maxNo = array[i];
        }
        if (array[i]< minNo)
        {
            minNo = array[i];
        }
    }
    cout<<maxNo<<' '<<minNo<<endl;
    return 0;
}

/* instead of writing 3 lines of code in if statement, simply use the built in function
for max function ..........
maxNo = max(maxNo , array[i]);
for min function ...........
minNo = min(minNo, array[i]); */