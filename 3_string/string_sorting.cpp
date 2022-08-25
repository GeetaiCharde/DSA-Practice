#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main()
{
    string s1="hasdgbcyrm";

    sort(s1.begin(), s1.end());
    //.begin() gives starting index 
    //.end() gives ending index

    cout<<s1<<endl;
    return 0;
}