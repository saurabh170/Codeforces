#include "stdio.h"
#include "stdlib.h"




int main()
{
	int n;
	scanf("%d",&n);
	int a[n];
	for (int i = 0; i <n ; ++i)
	{
		scanf("%d",&a[i]);
	}
	int i=0,p=0,k=0;
	int j=n-1;
	while(i<=j && k<n){
		if (a[i]<a[i+1])
		{
			i++;
		}
		if (a[n-1-p]>a[n-2-p])
		{
			j--;
			p++;
		}
		k++;
	}
	if (j<i)
	{
		printf("yes\n");
		printf("1 1\n" );
	}
	else{
		//quickSort(a,i,j);
		int p=0,k=0;
		int flag=0;
		while(p<i){
			if (a[p]<a[p+1])
			{
				k++;
			}
			else{
				flag=1;
				break;
			}
			p++;
		}
		p=j;
		while(p>i){
			if (a[p-1]>a[p])
			{
				k++;
			}
			else{
				flag=1;
				break;
			}
			p--;
		}
		//printf("%d\n",k );
		p=j+1;
		while(p<n-1){
			if (a[p]<a[p+1])
			{
				//printf("hi\n");
				k++;
			}
			else{
				flag=1;
				break;
			}
			p++;
		}
		//printf("k=%d\n",k );
		if ((j+1)<n)
		{
			if (a[i]>a[j+1])
			{
				flag=1;
				k--;
			}
		}
		if (i-1>=0)
		{
			if (a[j]<a[i-1])
			{
				flag=1;
				k--;
			}
		}
		if (flag==0)
		{
			printf("yes\n");
			printf("%d %d\n",i+1,j+1 );
		}
		else{
			printf("no\n");
		}
	}

	return 0;
}