#include "iostream"
#include <bits/stdc++.h>
#include "cmath"
using namespace std;
int main(){
	int m1,m,d;
	cin>>m1>>m>>d;
	int n=m1*m;
	int a[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
	}
	sort(a,a+n);
	int mid=a[n/2],flag=0,ans=0;
	for (int i = 0; i < n; ++i)
	{
		int ct=abs(a[i]-mid);
		if (ct%d==0)
		{
			ans=ans+(ct/d);
		}
		else{
			flag=1;
			break;
		}
	}
	if (flag==1)
	{
		cout<<"-1"<<endl;
	}
	else{
		cout<<ans<<endl;
	}
	return 0;
}