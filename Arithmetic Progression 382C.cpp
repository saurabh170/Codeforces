#include "iostream"
#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int a[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
	}
	if (n==1)
	{
		cout<<"-1"<<endl;
		return 0;
	}
	sort(a,a+n);
	int aco=0;
	for (int i = 0; i < n-1; ++i)
	{
		if (a[i]==a[i+1])
		{
			aco++;
		}
	}
	if (aco==(n-1))
	{
		cout<<"1\n";
		cout<<a[0]<<endl;
		return 0;
	}
	if (n==2)
	{
		if ((a[0]+a[1])%2==0)
		{
			cout<<"3\n";
			int d=a[1]-a[0];
			cout<<(a[0]-d)<<" "<<(a[0]+a[1])/2<<" "<<(a[1]+d)<<endl;
		}
		else
		{
			cout<<"2\n";
			int d=a[1]-a[0];
			cout<<(a[0]-d)<<" "<<(a[1]+d)<<endl;
		}
		return 0;
	}
	int d=a[1]-a[0],count=0,mind=d;
	for (int i = 0; i < n-1; ++i)
	{
		if ((a[i+1]-a[i])<mind)
		{
			mind=(a[i+1]-a[i]);
		}
		if (d==(a[i+1]-a[i]))
		{
			count++;
		}
	}
	if (count==(n-1))
	{
		cout<<"2\n";
		//int d=a[1]-a[0];
		cout<<(a[0]-d)<<" "<<(a[n-1]+d)<<endl;
		return 0;
	}
	count=0;
	for (int i = 0; i < n-1; ++i)
	{
		d=a[i+1]-a[i];
		if (d==mind)
		{
			count++;
		}
	}
	if (count!=(n-2))
	{
		cout<<"0\n";
		return 0;
	}
	//cout<<"1\n"
	int i;
    for (i = 0; i < (n-1); ++i)
    {
    	d=a[i+1]-a[i];
    	if (d!=mind)
    	{
    		break;
    	}
    }
    int s=a[i]+mind;
    if (s+mind==a[i+1])
    {
    	cout<<"1\n";
    	cout<<s<<endl;

    }
    else
    {
    	cout<<"0\n";
    }
	return 0;
}