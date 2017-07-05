#include "iostream"
#include "algorithm"
using namespace std;
#include "stdio.h"
#include "ctype.h"
#include "string.h"

int isvowel(char a){
	if (a=='a' || a=='u' || a=='o' || a=='i' || a=='e' || a=='y')
	{
		return 1;
		//"A", "O", "Y", "E", "U", "I",s 
	}
	return 0;
}

int main()
{
	char a[101];
	cin.getline(a,101);
	char ans[202];
	int j=0;
	for (int i = 0; i < strlen(a); ++i)
	{
		a[i]=tolower(a[i]);
		int c=isvowel(a[i]);
		if (c==0)
		{
			ans[j]='.';
			j++;
			ans[j]=a[i];
			j++;
		}
	}
	ans[j]='\0';
	cout<<ans<<endl;
	return 0;
}