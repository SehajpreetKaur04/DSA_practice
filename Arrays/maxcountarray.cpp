#include<iostream>
using namespace std;
void majorityelem(int arr[],int n)
{
    int max=0;
    int index=-1;
    for(int i=0;i<=n;i++){
        int count=0;
        for(int j=0;j<=n;j++){
            if(arr[i]==arr[j])
            count++;
        }

    if(count>max)
        max=count;
        index=i;
   }
   if(max>n/2)
     cout<<arr[index]<<endl;
   else 
     cout<<"No majority element"<<endl;
}
int main()
{
    int arr[]={1,1,2,1,3,5,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    
    majorityelem(arr,n);
    
    return 0;
}