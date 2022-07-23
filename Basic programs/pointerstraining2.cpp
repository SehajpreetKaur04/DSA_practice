#include<iostream>
using namespace std;
int getMax(int *ptr, int length){
    int max=*ptr;
    ptr++;
    for(int i=1;i<length;i++){
        if(*ptr>max){
            max=*ptr;
        }
        ptr++;
    }
    return max;
}
int main()
{
   int pp[5]={100,1200,375,600,990};
   int result=getMax(&[0],5);
   cout<<"result is: "<<result<<endl;
   return 0;
}