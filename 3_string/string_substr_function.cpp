#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s1="hellogoodluck";
    string s2= s1.substr(4,4);// parameter(starting index, no. of element)

    cout<<s2<<endl;
    return 0;
}