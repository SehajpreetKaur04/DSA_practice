#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char s[5];
    cout<<"Enter the string: "<<endl;
    cin>>s;
    int length=0,flag=0;
    length=strlen(s);
    for(int i=0;i<length;i++){
        if(s[i]=s[length-i-1]){
           flag=1;
           break;
        }
    }
    if(flag){
        cout<<"palindrome"<<endl;
    }
    else  
        cout<<"not palindrome"<<endl;

    return 0;
}