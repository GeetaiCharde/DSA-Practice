// Array behaves very similar to the pointer

#include <iostream>
using namespace std;

int main()
{
    int arr[]={10,20,30};
    cout<<*arr<<endl;

    int *ptr=arr;
    for(int i=0;i<3;i++){
        cout<<*ptr<<endl;
        ptr++;
    }
    cout<<"\n";
    // we can perform same operation without using pointer
    for (int i=0;i<3;i++){
        cout<<*(arr+i)<<endl;
        // arr++; is illegal
    }

    return 0;
}