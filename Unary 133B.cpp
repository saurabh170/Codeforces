#include<iostream>
#include<ctype.h>
#include<math.h>
#include "cstring"
#include "string"
//#include "cmath"
long long pow(int x){
	if (x==1)
	{
		return 16;
	}
	else if (x==0)
	{
		return 1;
	}
	return (16*pow(x-1))%1000003;
}
using namespace std;
int value(char a){
	if (a=='>')
	{
		return 8;
	}
	else if (a=='<')
	{
		return 9;
	}
	else if (a=='+')
	{
		return 10;
	}
	else if (a=='-')
	{
		return 11;
	}
	else if (a=='.')
	{
		return 12;
	}
	else if (a==',')
	{
		return 13;
	}
	else if (a=='[')
	{
		return 14;
	}
	return 15;
}
int main(){
	char a[101];
	cin>>a;
	long long ans=0;
	for(int i=strlen(a)-1;i>=0;i--){
		long long s=pow(strlen(a)-i-1);
		s=s%1000003;
		long long ss=value(a[i]);
		ss=ss%1000003;
		long long p=(ss*s)%1000003;
		ans=ans%1000003;
		ans =ans + p;
		ans =ans%1000003;
	}
	ans=ans%1000003;
	cout<<ans<<endl;
	return 0;
}