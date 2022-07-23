#include<iostream>
using namespace std;
void missingelem(int arr[],int n)
{
    int count=0;
    for(int i=arr[0];i<arr[n-1];i++){
        if(arr[count]==i)
           count++;
        else   
           cout<<i<<" ";
    }
}
int main()
{
    int arr[]={3,4,6,7,9,10,13,14};
    int n=sizeof(arr)/sizeof(arr[0]);
    missingelem(arr,n);
    return 0;
}
