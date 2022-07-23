#include<iostream>
using namespace std;
int countTriplet(int a[],int n)
{
    int count=0;
    for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        for(int k=j+1;k<n;k++){
            if(a[i]+a[j]==a[k])
            count++;
        }
    }
  }
  return count;
} 
int main()
{
    int a[]={1,2,3,4,5,6};
    int n=sizeof(a)/sizeof(a[0]);
    int x=countTriplet(a,n);
    cout<<x;
    return 0;
}