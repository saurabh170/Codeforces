#include "iostream"
#include "ctype.h"
#include "stdio.h"
using namespace std;
int main()
{
	float a,b,c,d;
	cin>>a>>b>>c>>d;
	//float ans=
	printf("%.12f\n",(a/b)*(1/(1-(1-a/b)*(1-c/d))));
	return 0;
}