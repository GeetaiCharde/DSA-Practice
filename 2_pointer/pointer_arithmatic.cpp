/* 
we can perform 4 opertaion in pointer arithmatic i.e
'++' , '--' , '+' , '-'
(increment, decrement, addition, subtraction)
*/

#include <iostream>
using namespace std;

int  main()
{
    // integer pointer
    // Integer pointer takes 4 bytes of memory
    int a=10;
    int *aptr =&a; 
    cout<<aptr<<endl; // suppose this will return 2000
    aptr++; // Then this will increment by 4 . 
    cout<<aptr<<endl; // this will return 2004
    
    // character pointer
    // CCharacter pointer takes 1 byte of memory
    char ch = 'a';
    char *cptr = &ch;
    cout<<cptr<<endl; //suppose this will return 2000
    cptr++; // Then this will increment by 1.
    cout<<cptr<<endl; // this will return 2001
    
    return 0;    
}