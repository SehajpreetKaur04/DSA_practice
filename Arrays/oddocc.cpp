#include<iostream>
using namespace std;
int occurences(int arr[],int n)
{
    for(int i=0;i<n;i++){
        int count=0;
        for(int j=0;j<n;j++){
            if(arr[i]==arr[j])
              count++;
        }
            if(count%2!=0)
              return arr[i];  
    }
    return -1;
}
int main()
{
    int arr[]={1,2,3,1,2,3,1,2,1,3,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<occurences(arr,n);
    return 0;
}