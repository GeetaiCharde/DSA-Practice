#include<iostream>
using namespace std;

int main()
{
    int a=10;
    int *p;
    p=&a;

    cout<<*p<<endl;

    int **q=&p;

    cout<<*q<<endl; // accesing value stored in q pointer. i.e. address of p pointer.
    cout<<**q<<endl; /* accesing value stored in q pointer i.e. address of p pointer. And p is holding
    address of variable a. Therefore this statement will return the value stored in variable a.*/

    return 0;
}