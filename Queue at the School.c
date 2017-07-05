#include "stdio.h"
int main(int argc, char const *argv[])
{
	int n,t;
	scanf("%d %d",&n,&t);
	char s[n];
	scanf("%s",s);
	char ans[n];
	for (int i = 0; i < n; ++i)
	{
		ans[i]='G';
	}
	int count=0;
	for (int i = n-1; i>=n-1-t-count ; i--)
	{
		if (s[i]=='B')
		{
			count++;
		}
	}
	for (int i = n-1; i>n-1-count ; i--)
	{
		ans[i]='B';
	}
	for (int i = 0; i < n-1-t-count; ++i)
	{
		if (s[i]=='B')
		{
			ans[i+t]='B';
		}
	}
	ans[n]='\0';
	printf("%s\n",ans );
	return 0;
}