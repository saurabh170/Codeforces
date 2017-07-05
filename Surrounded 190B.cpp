#include "iostream"
#include "cmath"
#include "stdio.h"
using namespace std;
void conditionalswap(int *a,int *b){
	int temp=*a;
	if (*a<*b)
	{
		temp=*a;
		*a=*b;
		*b=temp;
	}
}
int main()
{
	int x1,y1,r1;
	int x2,y2,r2;
	cin>>x1>>y1>>r1;
	cin>>x2>>y2>>r2;
	int R=r1,r=r2;
	conditionalswap(&R,&r);
	double d=sqrt(pow((x1-x2),2)+pow((y1-y2),2));
	//cout<<d<<endl;
	if (d>(r1+r2))
	{
		float ans=d-(r1+r2);
		ans=ans/2;
		printf("%.20f\n",(sqrt(pow((x1-x2),2)+pow((y1-y2),2))-(r1+r2))/2);
	}
	else if (sqrt(pow((x1-x2),2)+pow((y1-y2),2))>=(R-r))
	{
		cout<<"0.00000"<<endl;
	}
	else{
		float ans=R-d-r;
		ans=ans/2;
		printf("%.12f\n",(R-sqrt(pow((x1-x2),2)+pow((y1-y2),2))-r)/2);
	}
	return 0;
}