#include<iostream>
using namespace std;
void intersection(int arr1[],int arr2[],int n, int m)
{
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr1[i]==arr2[j])
               cout<<arr2[j]<<endl;
        }
    }
}
void unionof(int arr1[],int arr2[],int n,int m)
{
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr1[i]==arr2[j])
             
        }
    }
}
int main()
{
    int arr1[]={1,3,4,5,7};
    int arr2[]={2,3,5,6};
    int n=sizeof(arr1)/sizeof(arr1[0]);
    int m=sizeof(arr2)/sizeof(arr2[0]);
    intersection(arr1,arr2,n,m);
    unionof(arr1,arr2,n,m);
    return 0;
}