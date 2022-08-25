#include<iostream>
#include<string>
using namespace std;

int main()
{
    // string s1="abc";
    // string s2="xyz";

    // cout<<s2.compare(s1)<<endl;

    string s1="abc";
    string s2="abc";

     if(s2.compare(s1)==0) // can be written in different way if(!s2.compare(s1)). still the loop will execute. 
     {
        cout<<"strings are equal";
     }
    return 0;
}