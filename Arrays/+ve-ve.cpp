#include<iostream>
using namespace std;
void rearrange(int arr[], int left, int right)
{
   while(left<=right)
   {
    if(arr[left]<0 && arr[right]<0)
    {
        left++;
    }
    else if(arr[left]>0 && arr[right]<0)
    {
        int temp=arr[left];
        arr[left]=arr[right];
        arr[right]=temp;
        left++;
        right--;
    }
    else if(arr[left]>0 && arr[right]>0)
    {
        right--;
    }
    else
        left++;
        right--;
   }
}
void display(int arr[], int right)
{
    for(int i=0;i<=right;++i)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int arr[]={-12,-45,67,-3,10,-7,25,90};
    int n=sizeof(arr)/sizeof(arr[0]);
    rearrange(arr,0,n-1);
    display(arr,n-1);
    return 0;
}