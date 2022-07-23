#include<iostream>
using namespace std;
int x;
void sortocc(int arr[], int n)
{
    int count=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;i=j++)
        {
            if(arr[i] && arr[j]== x)
              count++;
        }
    }
    cout<<count;
}
int main()
{
    int arr[]={1,1,2,3,4,5,6,7,7,7,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"Enter the value: "<<endl;
    cin>>x;
    sortocc(arr,n);
    return 0;
}