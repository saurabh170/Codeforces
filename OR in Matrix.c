#include "stdio.h"
#include <limits.h>
int main(int argc, char const *argv[])
{
	int m,n;
	scanf("%d %d",&m,&n);
	int a[m][n];
	int cc=0;
	int r[m];
	int c[n];
	int nr[m];
	int nc[n];
	int noofrows=0;
	int noofcolumn=0;
	for (int i = 0; i < m; ++i)
	{
		r[i]=0;
		nr[i]=INT_MIN;
	}
	for (int i = 0; i < n; ++i)
	{
		c[i]=0;
		nc[i]=INT_MIN;
	}
	int count1=0,count2=0;
	for (int i = 0; i < m; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			scanf("%d",&a[i][j]);

			if (a[i][j]==1)
			{
				count1++;
			}
			else{
				cc++;
			}
			
			if (count1==n)
			{
				r[i]=1;
				noofrows++;
			}
		}
		if (count1!=0 && count1!=n)
		{
			//printf("asdsd\n");
			nr[i]=count1;
		}
		count1=0;
	}
	for (int i = 0; i < n; ++i)
	{
		for(int j=0;j<m;j++){
			if (a[j][i]==1)
			{
				count2++;
			}
			if (count2==m)
			{
				c[i]=1;
				noofcolumn++;
			}
		}
		if (count2!=0 && count2!=m)
		{
			//printf("csdcsdc\n");
			nc[i]=count2;
		}
		count2=0;
	}
	int flag=0;
	int ans[m][n];
	for (int i = 0; i < m; ++i)
	{
		for(int j=0;j<n;j++){
			if (r[i]==1&&c[j]==1)
			{
				ans[i][j]=1;
				flag=1;
			}
			else{
				ans[i][j]=0;
			}
		}
	}
	int flag1=0,flag2=0;
	for (int i = 0; i < m; ++i)
	{
		if (nr[i]!=noofcolumn && nr[i]!=INT_MIN)
		{
			//printf("hjubhu\n");
			flag1=1;
			break;
		}
	}
	for (int i = 0; i < n; ++i)
	{
		if (nc[i]!=noofrows && nc[i]!=INT_MIN)
		{
			//printf("uog\n");
			flag1=1;
			break;
		}
	}
	if (flag1==1)
	{
		//printf("csd\n");
		printf("NO\n");
	}
	else if (flag==0 && cc!=n*m)
	{
		printf("NO\n");
	}
	else{
		printf("YES\n");
		for (int i = 0; i < m; ++i)
		{
			for (int j = 0; j < n; ++j)
			{
				printf("%d ",ans[i][j] );
			}
			puts("");
		}
	}	
	return 0;
}