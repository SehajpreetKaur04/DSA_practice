#include<bits/stdc++.h>
using namespace std;
int removedup(int arr[],int n)
{
    int i,count=0;
    for(i=1;i<n;i++)
    {
        if(arr[i]==arr[i-1])
            count++;
        else    
            arr[i-count]=arr[i];
        
    }
    return i-count;
}
int main()
{
    int arr[]={2,3,3,4,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int x=removedup(arr,n);
    cout<<x;
    return 0;
}