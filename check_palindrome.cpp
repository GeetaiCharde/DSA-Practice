#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter word length: ";
    cin>>n;

    cout<<"Enter word: ";
    char arr[n+1];
    cin>>arr;

    bool check = 1;
    for(int i=0;i<n;i++){
        if(arr[i] != arr[n-1-i]){
            check = 0;
            break;
        }
    }
    if(check == true){
        cout<<arr<<" is a palindrome"<<endl;
    }
    else{
        cout<<arr<<" is not a palindrome"<<endl;
    }
return 0;
}