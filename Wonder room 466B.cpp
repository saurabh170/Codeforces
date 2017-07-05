#include "iostream"
#include "cmath"
#include "fstream"
using namespace std;
int main(int argc, char const *argv[])
{
	long long n,a,b;
	cin>>n>>a>>b;
	n=6*n;
	long long newa;
	float rotn =(sqrt(n));

	//cout<<n<<" "<<rotn<<endl;
	if (a<b)
	{
		for (int i = a; i <= rotn; ++i)
		{
			if (n%i==0)
			{
				a=i;
				break;
			}
		}
		long long newb=ceil(n/a);
		if (newb>b)
		{
			b=newb;
		}
		long long area=a*b;
		while(area<n){
			b++;
			area=a*b;
		}
		cout<<area<<endl;
		cout<<a<<" "<<b<<endl;
	}
	else
	{
		for (int i = b; i <= rotn; ++i)
		{
			if (n%i==0)
			{
				b=i;
				break;
			}
		}
		long long newa=ceil(n/b);
		if (newa>a)
		{
			a=newa;
		}
		long long area=a*b;
		while(area<n){
			a++;
			area=a*b;
		}
		cout<<area<<endl;
		cout<<a<<" "<<b<<endl;
	}
	
	return 0;
}