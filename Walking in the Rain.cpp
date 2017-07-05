#include "iostream"
#include "limits.h"
using namespace std;

int max(int a,int b){
	if (a>=b)
	{
		return a;
	}
	else return b;
}
int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int a[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
	}
	int maxx=INT_MAX;
	for (int i = 1; i < n-1; i=i+1)
	{
		if (max(a[i],a[i+1])<maxx)
		{
			maxx=max(a[i],a[i+1]);
		}
	}
	if (maxx>a[0])
	{
		maxx=a[0];
	}
	if (maxx>a[n-1])
	{
		maxx=a[n-1];
	}
	cout<<maxx<<endl;
	return 0;
}