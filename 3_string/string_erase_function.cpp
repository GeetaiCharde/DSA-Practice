/*
in array, suppose we have to delete particular element form particular index at that time we again have
to use "shift" function to take the position of deleted element.

this work can be perform by "erase" function
*/
#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s1="helloGoodluck";
    s1.erase(0,5); /* parameter of erase function contain 
    (index position of element from where you want to delete, no. of element)*/
    cout<<s1<<endl;
    return 0;
}