#include<iostream>
using namespace std;
int main()
{
    int a=10;
    const int b=20;

    int *ptr=&a; // regular pointer

    const int* cptr=&b; // pointer to a constant
    // we cannot modify value of b

    int* const constantPtr=&a; // constant pointer
    int c=10;
    
    *constantPtr=333; //changing the contents in a
    const int* const cptr=&b; 
    return 0;
}