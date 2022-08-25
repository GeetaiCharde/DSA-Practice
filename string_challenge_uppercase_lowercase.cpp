#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
    string str;
    cout<<"Enter string: ";
    cin>>str;

    /* without use of in-built function
    // convert into upper case
    for(int i=0; i<str.size(); i++){
        if(str[i] >= 'a' && str[i]<='z'){
            str[i] -=32;
        }
    }
    cout<<str<<endl;

    // convert into lower case
    for(int i=0; i<str.size();i++){
        if(str[i]>='A' && str[i]<='Z'){
            str[i] +=32;
        }
    }
    cout<<str<<endl;
    */

   transform(str.begin(),str.end(), str.begin(), ::toupper);
   // parameter (string(enter starting itrator and ending iterator), form where to start, convert to upper/lower)
   cout<<str<<endl;

   transform(str.begin(), str.end(), str.begin(), ::tolower);
   cout<<str<<endl;


    return 0;
}