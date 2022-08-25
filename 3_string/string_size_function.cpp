#include<iostream >
#include<string>
using namespace std;

int main()
{
    string s1="HelloGoodluck";
    //cout<<s1.size()<<endl;
    //s1.length will also work
    // this function is very usefull wheen we itrate the string (without knowing the string length we can perform opertaion)
    for(int i=0; i<s1.size();i++){
        cout<<s1[i]<<endl;
    }
    return 0;    

}