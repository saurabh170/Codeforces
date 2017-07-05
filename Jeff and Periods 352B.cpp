#include "iostream"
#include "bits/stdc++.h"
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	int next[100001];
	int period[100001];
	int fail[100001];
	for (int i = 0; i < 100001; ++i)
	{
		next[i]=-1;
		period[i]=-1;
		fail[i]=-1;
	}
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
	}
	//cout<<"dfs\n";
	for (int i = 0; i < n; ++i)
	{
		if (period[a[i]]==-1 && fail[a[i]]==-1)
		{
			period[a[i]]=0;
			next[a[i]]=i;
			//cout<<period[a[i]]<<" "<<next[a[i]]<<endl;
		}
		else if (period[a[i]]==0  && fail[a[i]]==-1)
		{
			period[a[i]]=i-next[a[i]];
			next[a[i]]=i;
			//cout<<period[a[i]]<<" "<<next[a[i]]<<endl;
		}
		else if(fail[a[i]]==-1){
			if ((i-next[a[i]])==period[a[i]])
			{
				next[a[i]]=i;
				//cout<<period[a[i]]<<" "<<next[a[i]]<<endl;
			}
			else{
				fail[a[i]]=0;
			}
		}
	}
	int count=0;
	for (int i = 0; i < n; ++i)
	{
		if (fail[a[i]]==-1 && next[a[i]]!=-1)
		{
			count++;
			next[a[i]]=-1;
		}
	}
	//cout<<"g\n";

	cout<<count<<endl;
	sort(a,a+n);
	for (int i = 0; i < n; ++i)
	{
		//cout<<period[a[i]]<<" "<<fail[a[i]]<<endl;
		if (period[a[i]]!=-1 && fail[a[i]]==-1)
		{
			//cout<<"sdf"<<endl;
			cout<<a[i]<<" "<<period[a[i]]<<endl;
			fail[a[i]]=0;
			//cout<<"sdf1"<<endl;
		}
	}
	//cout<<"fsd\n";
	return 0;
}