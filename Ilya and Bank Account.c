#include "stdio.h"
int main(int argc, char const *argv[])
{
	int n;
	scanf("%d",&n);
	if (n>=0)
	{
		printf("%d\n",n );
	}
	else{
		if (n%10<=(n/10)%10)
		{
			printf("%d\n",(n/10) );
		}
		else{
			int t=n%10;
			n=n/100;
			n=n*10+t;
			printf("%d\n",n );
		}
	}
	return 0;
}