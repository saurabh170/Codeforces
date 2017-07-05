#include "stdio.h"
#include "limits.h"
int main()
{
	int n;
	scanf("%d",&n);
	int a[n];
	int b[200001];
	int c[200001];
	int cf=0,cs=0;
	long long fi=0,sd=0;
	for (int i = 0; i < n; ++i)
	{
		scanf("%d",&a[i]);
		if (a[i]>0)
		{
			fi=fi+a[i];
			b[cf++]=a[i];
		}
		else if (a[i]<0)
		{
			sd=sd+a[i]*(-1);
			c[cs++]=(-1)*a[i];
		}
	}
	if (fi!=sd)
	{
		if (fi>sd)
		{
			printf("first\n");
		}
		else{
			printf("second\n");
		}
	}
	else{
		int i=0,j=0;
		while(i<cf&&j<cs){
			if (b[i]==c[j])
			{
				i++;
				j++;
			}
			else{
				if (b[i]>c[j])
				{
					printf("first\n");
				}
				else{
					printf("second\n");
				}
				return 0;
			}
		}
		if (cf>cs)
		{
			printf("first\n");
		}
		if (cs>cf)
		{
			printf("second\n");
		}
		if (a[n-1]>0)
		{
			printf("first\n");
		}
		else{
			printf("second\n");
		}
	}
	return 0;
}