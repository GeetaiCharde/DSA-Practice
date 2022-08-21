#include<iostream>
#include<climits>
using namespace std;

int main()
{
    int n;
    cout<<"Enter sentence length: ";
    cin>>n;
    cin.ignore();

    char arr[n+1];
    cout<<"Enter sentence: ";
    cin.getline(arr,n); //taking input as a sentence 
    cin.ignore(); // clearing the buffer

    int i=0; // iterator
    int currlen =0, maxlen = 0;
    int start=0, max_start=0;

    while(1)
    {

        if(arr[i]==' ' || arr[i]=='\0'){
            if(currlen > maxlen){
                maxlen=currlen;
                max_start = start;
            }
            currlen=0;
            start = i+1;
        }
        else{
            currlen++;
        }
        
        if(arr[i] == '\0'){
            break;
        }
        i++;
    }
    cout<<"Maximum word length is: "<<maxlen<<" \nAnd word is: ";
    for(int i=0; i<maxlen; i++){
        cout<<arr[i+max_start];
    }
    return 0;
}