#include<iostream>
#include<string>
using namespace std;

int main ()
{
    string str="Geetai";
    cout<<str<<endl;

    // str.clear();

    // if(str.empty()){
    //     cout<<"string is empty";
    // }

    if(!str.empty()){// because it is a true value
        cout<<"string is not empty";
    }
    return 0;
}