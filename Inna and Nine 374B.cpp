#include "iostream"
#include "cstring"
using namespace std;
int main()
{
	char b[1000000];
	cin>>b;
	
	int n=strlen(b);
	int a[n];
	for (int i = 0; i < n; ++i)
	{
		a[i]=b[i]-48;	
	}
	int count=0,i=0,j=0;
	int ans[n]={0},flag=0;
	while(i<(n-1))
	{
		if (a[i]+a[i+1]==9)
		{
			count++;
			ans[j]=count;
			//cout<<"j="<<j<<" "<<ans[j]<<endl;
		}
		else
		{
			flag=1;
			j++;
			count=0;
		}
		i++;
	}
	long long fans=1;
	for (int i = 0; i < n; ++i)
	{
		if (ans[i]!=0)
		{
			//cout<<ans[i]<<endl;
			fans=fans*ans[i];
		}
	}
	if (flag==0)
	{
		cout<<"1"<<endl;
	}
	else{
		cout<<fans<<endl;
	}
	
	//cout<<int(i'1')<<" "<<int('9')<<endl;
	return 0;
}