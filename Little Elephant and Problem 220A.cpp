#include "iostream"
using namespace std;
int checksorted(int a[],int n){
	int count=0;
	int i=0;
	while(i<(n-1)){
		if (a[i]<=a[i+1])
		{
			count++;
			i++;
		}
		else{
			break;
		}
	}
	if (count==(n-1))
	{
		return 1;
	}
	return 0;
}
int main()
{
	int n;
	cin>>n;
	int a[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
	}
	int i=0,j=n-1,k=0;
	if (checksorted(a,n)==1)
	{
		cout<<"YES"<<endl;
	}
	else
	{
		while(i<(n-1))
		{
			//k=i;
			if (a[k]>a[k+1])
			{
				break;
			}
			if (a[i]>a[i+1])
			{
				break;
			}
			else if (a[k]==a[k+1])
			{
				k++;
			}
			else{

				i++;
				k=i;
			}
		}
		k=(n-1);
		while(j>0)
		{
			if (a[k-1]>a[k])
			{
				break;
			}
			if (a[j-1]>a[j])
			{
				break;
			}
			else if(a[k]==a[k-1]){
				k--;
			}
			else{
				j--;
				k=j;	
			}
		}
		int t=a[i];
		a[i]=a[j];
		a[j]=t;
		// for (int i = 0; i < n; ++i)
		// {
		// 	cout<<a[i]<<" ";
		// }
		// cout<<endl;
		if (checksorted(a,n)==1)
		{
			cout<<"YES"<<endl;
		}
		else
		{
			cout<<"NO"<<endl;
		}
	}
	
	return 0;
}