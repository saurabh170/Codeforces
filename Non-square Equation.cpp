#include <iostream>
#include "stdio.h"
#include "cmath"

int binary_search(int arr[], int l, int r, int x)
{
   if (r >= l)
   {
        int mid = l + (r - l)/2;
        if (arr[mid] == x)  return mid;
        if (arr[mid] > x) return binary_search(arr, l, mid-1, x);
        return binary_search(arr, mid+1, r, x);
   }
   return -1;
}	

int sum(int x){
	int sum=0;
	int p=x;
	while(p!=0){
		sum=sum+p%10;
		p=p/10;
	}
	return sum;
}
using namespace std;
int main()
{
	long long n;
	cin>>n;
	int flag=0;
	for (long long i = sqrt(n); i >sqrt(n)/sqrt(2); i--)
	{
		
		if ((pow(i,2)+i*sum(i))==n)
		{
			flag=1;
			cout<<i<<endl;
			break;
		}
	}
	if(flag==0)
	{
		cout<<"-1"<<endl;
	}
	return 0;
}