#include <iostream> 
using namespace std;
int countTriplets(int a[],int n){
        int max_val=0;
        for (int i=0;i<n;i++)
            max_val=max(max_val,a[i]);
        int freq[max_val+1]={0};
        for (int i=0;i<n;i++)
            freq[a[i]]++;
 
        int count=0;  
    
        count+=freq[0]*(freq[0]-1)*(freq[0]-2)/6;
 
        for(int i=1;i<=max_val;i++){
            count+=freq[0]*freq[i]*(freq[i]-1)/2;
        }
 
        for (int i=1;2*i<=max_val;i++){
            count+=freq[i]*(freq[i]-1)/2*freq[2*i];
        }
 
        for (int i=1;i<=max_val;i++) {
            for (int j=i+1;i+j<=max_val;j++)
                count+=freq[i]*freq[j]*freq[i+j];
        }
 
        return count;
}
int main(){
	int a[] = {1, 2, 3, 4, 5};
	int n= sizeof(a)/sizeof(a[0]);
	cout << countTriplets(a,n);
	return 0;
}