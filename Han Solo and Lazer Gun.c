#include "stdio.h"
#include "stdlib.h"
#include "limits.h"
float slope(int x,int xo,int y,int yo){
	double x1,y1;
	x1=x-xo;
	y1=y-yo;
	if (x1==0)
	{
		return INT_MAX-24;
	}
	printf("%.20lf\n",(y1/x1) );
	return (y1/x1);
}

int search(float a[],float x){
	int i=0;
	while(a[i]!=INT_MIN){
		if (a[i]==x)
		{
			return 1;
		}
		i++;
	}
	return 0;
}
int main()
{
	int n,xo,yo,i;
	float a[1001];
	for (i = 0; i < 1001; ++i)
	{
		a[i]=INT_MIN;
	}
	int k=0;
	//int count=0;
	scanf("%d %d %d",&n,&xo,&yo);
	for (i = 0; i < n; ++i)
	{
		int x,y;
		scanf("%d %d",&x,&y);
		float sl=slope(x,xo,y,yo);
		int s=search(a,sl);
		if (s==0)
		{
			a[k]=sl;
			k++;
		}
	}
	printf("%d\n",k );
	return 0;
}
