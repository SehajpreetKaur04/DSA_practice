#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char str[100];
    cout<<"Enter a string:"<<endl;
    gets(str);
    cout<<"Length of string is: "<<strlen(str)<<endl;
    return 0;
}