#include "iostream"
#include "cmath"
using namespace std;
int mmin(int a,int b){
	if (a<b)
	{
		return a;
	}
	return b;
}
void conditionalswap(int *a,int *b){
	int temp=*a;
	if (*a>*b)
	{
		temp=*a;
		*a=*b;
		*b=temp;
	}
}
int main(int argc, char const *argv[])
{
	int n,x;
	cin>>n>>x;
	int max=0,min=10001;
	for (int i = 0; i < n; ++i)
	{
		int a,b;
		cin>>a>>b;
		conditionalswap(&a,&b);
		if (a>max)
		{
			max=a;
		}
		//cout<<b<<endl;
		if (b<min)
		{
			min=b;
		}
	}
	//cout<<max<<" "<<min<<endl;
	if (max>min)
	{
		cout<<"-1"<<endl;
	}
	else{
		if (max<=x && min>=x)
		{
			cout<<"0"<<endl;
		}
		else{
		int a=abs(x-min);
		int b=abs(x-max);
		int ans=mmin(a,b);
		cout<<ans<<endl;}
	}
	return 0;
}