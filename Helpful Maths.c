#include "stdio.h"
#include "string.h"
int main()
{
	char a[105];
	scanf("%s",a);
	int n=strlen(a);
	int b[3];
	for (int i = 0; i < 3; ++i)
	{
		b[i]=0;
	}
	for (int i = 0; i <= n; ++i)
	{
		if (a[i]=='1')
		{
			b[0]++;
		}
		if (a[i]=='2')
		{
			b[1]++;
		}
		if (a[i]=='3')
		{
			b[2]++;
		}
	}
	int i=0;
	int p=b[0];
	while(p!=0){
		a[i]='1';
		i=i+2;
		p--;
	}
	p=b[1];
	while(p!=0){
		a[i]='2';
		i=i+2;
		p--;
	}
	p=b[2];
	while(p!=0){
		a[i]='3';
		i=i+2;
		p--;
	}
	//printf("kh\n");
	printf("%s\n",a );
	return 0;
}