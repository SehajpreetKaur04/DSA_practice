#include<iostream>
using namespace std;
int maxelem(int arr[],int n)
{
    int max=arr[0];
    for(int i=0;i<n;i++)
    {
        if(max<arr[i])
          max=arr[i];
    }
    return max;
}
int minelem(int arr[],int n)
{
    int min=arr[0];
    for(int i=0;i<n;i++)
    {
        if(min>arr[i])
           min=arr[i];
    }
    return min;
}
int main()
{
    int arr[]={3,4,3,7,6,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    int largest=maxelem(arr,n);
    cout<<largest<<endl;
    int smallest=minelem(arr,n);
    cout<<smallest<<endl;

}