#include "stdio.h"
int main(int argc, char const *argv[])
{
	int n;
	scanf("%d",&n);
	int a[n];
	for (int i = 0; i < n; ++i)
	{
		scanf("%d",&a[i]);
	}
	int ans[n];
	for (int i = 0; i < n; ++i)
	{
		ans[a[i]-1]=i+1;
	}
	for (int i = 0; i < n; ++i)
	{
		printf("%d ",ans[i] );
	}
	return 0;
}