#include "iostream"
#include "bits/stdc++.h"
int binary_search(int arr[], int l, int r, int x)
{
   if (r >= l)
   {
        int mid = l + (r - l)/2;
 
        // If the element is present at the middle itself
        if (arr[mid] == x)  return 1;
 
        // If element is smaller than mid, then it can only be present
        // in left subarray
        if (arr[mid] > x) return binary_search(arr, l, mid-1, x);
 
        // Else the element can only be present in right subarray
        return binary_search(arr, mid+1, r, x);
   }
 
   // We reach here when element is not present in array
   return -1;
}
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
	}
	int m;
	cin>>m;
	int b[m];
	for (int i = 0; i < m; ++i)
	{
		cin>>b[i];
	}
	sort(b,b+m);
	int a1=0,a2=0;
	for (int i = 0; i < n; ++i)
	{
		int ss=binary_search(b,0,m-1,a[i]);
		if (ss==1)
		{
			a1=a1+i+1;
			a2=a2+n-i;
		}
	}
	cout<<a1<<" "<<a2<<endl;
	return 0;
}