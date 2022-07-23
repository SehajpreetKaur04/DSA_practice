#include<iostream>
using namespace std;
int missingelem(int arr[], int n)
{
    int total=(n+1)*(n+2)/2;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    return total-sum;
}
int main()
{
    int arr[]={1,3,4,5,6,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    int result=missingelem(arr,n);
    cout<<result;
}