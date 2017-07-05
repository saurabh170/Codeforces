#include "stdio.h"
int main()
{
	int n,s,t;
	scanf("%d %d %d",&n,&s,&t);
	int a[n];
	for (int i = 0; i < n; ++i)
	{
		scanf("%d",&a[i]);
	}
	int count =0,i=0;
	int p=s;
	int flag=0;
	while(i<n){
		
		if (p==t)
		{
			flag=1;
			break;
		}
		p=a[p-1];
		i++;
	}
	if (flag==0)
	{
		printf("-1\n");
	}
	else{
		printf("%d\n",i );
	}
	return 0;
}