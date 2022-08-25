#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
    string s1;
    cout<<"Enter string: ";
    cin>>s1;

    int freq[26];
    for(int i=0;i<26;i++){
        freq[i]=0;
    }

    for(int i=0; i<s1.size();i++){
        freq[s1[i]-'a']++;
    }
    char ans = 'a';
    int max_freq = 0;
    for(int i=0; i<26; i++){
        if(freq[i] > max_freq){
            max_freq = freq[i];
            ans=i+'a';
        }
    }
    cout<<"maximum occuring element is: "<<ans<<"\nIts frequency is:"<<max_freq<<endl;


    return 0;

}