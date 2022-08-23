#include<iostream>
using namespace std;

int main()
{
    int a=10; // storing value in variable 'a'
    int *aptr; // pointer declaration
    *aptr=&a; // puting address of 'a' in 'aptr' pointer

    cout<<&a<<endl; // gives address 
    cout<<aptr<<endl; // gives address
    cout<<*aptr<<endl; // gives value

    *aptr =20; //changing value variable 'a' without directly using 'a'
    cout<<*aptr<<endl; // printing changed value
    return 0;    
}