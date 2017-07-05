#include "iostream"
using namespace std;
int main(int argc, char const *argv[])
{
	int n;
	cin>>n;	
	int a[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
	}
	int ians=0;
	while(ians<(n-1)){
		if (a[ians]>a[ians+1])
		{
			break;
		}
		ians++;
	}
	int jans=n-1;
	while(jans>0){
		if (a[jans]<a[jans-1])
		{
			break;
		}
		jans--;
	}
	int count=0;
	if (jans<(n-1) && a[ians]>a[jans+1])
	{
		cout<<"0 0"<<endl;
	}
	else if (ians>0 && a[ians-1]>a[jans])
	{
		cout<<"0 0"<<endl;
	}
	else
	{
		int flag=0;
		//cout<<"helo1"<<endl;
		int i=0;
		while(i<ians-1){
			if (a[i]<=a[i+1])
			{
				count++;
			}
			else{
				flag=1;
			}
			i++;
		}
		count++;
		i=jans;
		while(i>ians){
			if (a[i]<a[i-1])
			{
				count++;
			}
			else{
				flag=1;
			}
			i--;
		}
		count++;
		i=jans+1;
		while(i<n-1)
		{
			if (a[i]<a[i+1])
			{
				count++;
			}
			else{
				flag=1;
			}
			i++;
		}
		if (flag==0 && ians<jans)
		{
			cout<<(ians+1)<<" "<<jans+1<<endl;
		}
		else
		{
			cout<<"0 0"<<endl;
		}
	}
	return 0;
}