#include "stdio.h"
#include "stdlib.h"
int main()
{
	int n,m,a,b;
	scanf("%d%d%d%d",&n,&m,&a,&b);
	int r=n%m;
	int q=n/m;
	int ans;
	if (b>=m*a)
	{
		ans=n*a;
	}
	else{
		if (r*a>=b)
		{
			ans=b*(q+1);
		}
		else{
			ans=b*q+r*a;
		}
	}
	printf("%d\n",ans );	
	return 0;
}