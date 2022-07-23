#include<iostream>
using namespace std;
int main()
{
    int sum=0;
    int a[3]={1,2,3};
    cout<<"The array is: "<<endl;
    for(int i=0;i<=2;i++){
        cout<<a[i]<<endl;
    }
    cout<<"Sum of array elements is:";
    for(int i=0;i<=3;i++){
        sum=sum+a[i];
    }
    cout<<sum<<endl;
    return 0;
}