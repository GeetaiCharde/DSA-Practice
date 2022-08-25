// append string
#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s1="Fam";
    string s2="ily";

    // 1st way
    /*s1.append(s2);
    cout<<s1<<endl;*/
    
    //2nd way
    //cout<<s1+s2<<endl;

    // 3rd way
    s1 = s1+s2;
    cout<<s1<<endl;


    return 0;
}
