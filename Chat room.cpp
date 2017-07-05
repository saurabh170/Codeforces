#include "iostream"
#include "string.h"
using namespace std;
int main()
{
	char a[101];
	cin.getline(a,10001);
	char b[5]={'h','e','l','l','o'};
	int k=0;
	for (int i = 0; i < strlen(a); ++i)
	{
		if (a[i]==b[k])
		{
			k++;
		}
		if (k==5)
		{
			break;
		}
	}
	if (k==5)
	{
		cout<<"YES\n";
	}
	else{
		cout<<"NO\n";
	}
	return 0;
}