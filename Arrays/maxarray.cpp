#include<iostream>
using namespace std;
int maximum(int arr[],int n)
{
   int max=arr[0];
   for(int i=0;i<=n;i++){
    if(arr[i]>max){
        max=arr[i];
    }
   }
    return max;
}
int main()
{
  int arr[]={33,678,990,3456,1233,4455};
  int n=sizeof(arr)/sizeof(arr[0]);
  int largest=maximum(arr,n);
  cout<<largest<<endl;
  return 0;
}