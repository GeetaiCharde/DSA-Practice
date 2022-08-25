#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
    string  s1;
    cout<<"Enter numeric string: "; 
    cin>>s1;

    sort(s1.begin(),s1.end(), greater<int>());
    cout<<"Biggest number from string is  "<<s1<<endl;
    return 0;
}