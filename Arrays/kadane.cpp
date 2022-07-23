#include<iostream>
using namespace std;
int main()
{
  int arr[]={-2,-3,4,-1,-2,1,5,-3};
  int n=sizeof(arr)/sizeof(arr[0]);
  int max=INT_MIN, curr=0;
  for(int i=0;i<n;i++)
  {
    curr=curr+arr[i];

    if(max<curr){
      max=curr;
    }
    if(curr<0)
      curr=0;
  }
  cout<<max;

  return 0;
}