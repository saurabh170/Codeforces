#include <iostream>
#include "stdio.h"
#include "string.h"
#include "stdlib.h"
using namespace std;

int main()
{
	char s[1001];
	cin.getline(s,10001);
	//cout<<s;
	int a[26];
	for (int i = 0; i <26; ++i)
	{
		a[i]=-1;
	}
	//printf("%d\n",strlen(s) );
	for (int i = 0; i < strlen(s); ++i)
	{
		//printf("%c\n",s[i] );
		if (s[i]!='{' && s[i]!=',' && s[i]!='}' && s[i]!=' ')
		{
			if (a[s[i]-97]==-1)
			{
				a[s[i]-97]=1;
			}
		}
	}
	int count=0;
	for (int i = 0; i < 26; ++i)
	{
		if (a[i]==1)
		{
			count++;
		}
	}
	cout<<count<<endl;
	return 0;
}