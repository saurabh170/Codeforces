#include "iostream"
using namespace std;
int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	long long a[n];
	long long c[n]={0};
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
	}
	int j=0,count=1;
	for (int i = 0; i < n-1; ++i)
	{
		
		if (a[i]==a[i+1])
		{
			count++;
		}
		c[j]=count;
		if(a[i]!=a[i+1]){
			count=1;
			j++;
		}

	}
	//cout<<j<<endl;
	if (a[n-1]!=a[n-2])
	{
		c[j]=1;
	}
	long long i=0,ans=0;
	while(c[i]!=0 && i<n)
	{
		//cout<<c[i]<<endl;
		ans=ans+(c[i]*(c[i]+1))/2;
		//cout<<ans<<endl;
		i++;
	}
	cout<<ans<<endl;
	return 0;
}