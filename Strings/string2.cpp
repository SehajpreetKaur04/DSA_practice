#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char s[15],temp;
    int i=0,j;
    cout<<"Enter the string: ";
    gets(s);
    j=strlen(s)-1;
    while(i<j)
    {
        temp=s[i];
        s[i]=s[j];
        s[j]=temp;
        i++;
        j--;
    }
    cout<<s<<endl;
    return 0;

}