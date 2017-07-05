#include "iostream"
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	int max=0,imax;
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
		if (a[i]>max)
		{
			imax=i;
			max=a[i];
		}
	}
	int count=0;
	for (int i = 0; i < n; ++i)
	{
		if (a[i]==max)
		{
			count++;
		}
	}
	int ans[n],i=0;
	while(i<n)
	{
		while(i<=imax){
			if (i!=imax)
			{
				ans[i]=max-a[i]+1;
				i++;
			}
			else if(i==imax)
			{
				if (count>1)
				{
					ans[i]=1;
					count--;
				}
				else{
					ans[i]=0;
				}
				i++;
			}
		}
		max=0;
		for (int j = imax+1; j < n; ++j)
		{
			if (a[j]>max)
			{
				max=a[j];
				imax=j;
			}
		}
		count=0;
		for (int j = imax+1; j < n; ++j)
		{
			if (a[j]==max)
			{
				count++;
			}
		}
		// else{
		// 	max=0;
		// 	for(int j=i;j<n;j++){
		// 		if (a[j]>max)
		// 		{
		// 			max=a[j];
		// 		}
		// 	}
		// 	count=0;
		// 	for(int j=i;j<n;j++){
		// 		if (a[j]==count)
		// 		{
		// 			count++;
		// 		}
		// 	}
		// }
	}
	for (int i = 0; i < n; ++i)
	{
		cout<<ans[i]<<" ";
	}
	cout<<endl;
	return 0;
}