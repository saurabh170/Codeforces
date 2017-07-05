#include "iostream"
#include <bits/stdc++.h>

using namespace std;
int min(int aa,int bb){
	if (aa<bb)
	{
		return aa;
	}
	return bb;
}

struct data{
	int a;
	int b;
};
bool comparedata(data i1,data i2)
{
    return (i1.b < i2.b);
}

int main()
{
	int n,m;
	cin>>n>>m;
	struct data data[m];
	for (int i = 0; i < m; ++i)
	{
		cin>>data[i].a>>data[i].b;
	}
	sort(data,data+m,comparedata);
	int i=m-1,ans=0;
	while(n!=0 && i>=0){
		ans=ans+min(n,data[i].a)*data[i].b;
		n=n-min(n,data[i].a);
		i--;
	}
	cout<<ans<<endl;
	return 0;
}