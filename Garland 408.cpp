#include "iostream"
#include "string.h"
using namespace std;
int min(int a,int b){
	if (a<b)
	{
		return a;
	}
	return b;
}
int main(int argc, char const *argv[])
{
	char a[101];
	char b[1001];
	cin>>a>>b;
	int s[26];
	int s1[26]={0};
	for (int i = 0; i < 26; ++i)
	{
		s[i]=0;
	}
	for (int i = 0; i < strlen(a); ++i)
	{
		s[a[i]-97]++;
	}
	for (int i = 0; i < strlen(b); ++i)
	{
		s1[b[i]-97]++;
	}
	int ans=0;
	int flag=0;
	for(int i=0 ; i<strlen(b);i++){
		if(s[b[i]-97]==0){
			flag=1;
			break;
		}
	}
	for (int i = 0; i < 26; ++i)
	{
		if (flag==1)
		{
			break;
		}
		ans=ans+min(s[i],s1[i]);n
	}
	if (ans>0 && flag==0)
	{
		cout<<ans<<endl;
	}
	else{
		cout<<"-1"<<endl;
	}
	return 0;
}