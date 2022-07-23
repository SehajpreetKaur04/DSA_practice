#include<iostream>
using namespace std;
int* getPrices(){
    int productPrices[5]={100,1200,375,600,990};
    return &productPrices[0];
}
int main()
{
    int* ptr=getPrices();
    cout<<"ptr is: "<<ptr<<endl;
    cout<<"*ptr is:"<<*ptr<<endl;
    return 0;
}