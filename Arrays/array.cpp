#include<iostream>
using namespace std;
int main()
{
    int i,j,a[10];
    cout<<"Enter the number of elements: "<<endl;
    cin>>i;
    cout<<"Enter the elements: "<<endl;
    for(i=0;i<=10;i++)
    {
        cin>>a[i];
    }
    cout<<"Array is: "<<endl;
    for(i=0;i<=5;i++){
        cout<<a[i]<<endl;
    }

    return 0;
}