#include "iostream"
using namespace std;
int main()
{
	int n,a;
	cin>>n>>a;
	int aa[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>aa[i];
	}
	int count=0;
	if (aa[a-1]==1)
	{
		count=1;
	}
	int i=(a-2),j=(a);
	while(i>=0 && j<n){
		if (aa[i]==1 && aa[j]==1)
		{
			count+=2;
		}
		i--;
		j++;
	}
	while(i>=0){
		if (aa[i]==1)
		{
			count++;
		}
		i--;
	}
	while(j<n){
		if (aa[j]==1)
		{
			count++;
		}
		j++;
	}
	cout<<count<<endl;
	return 0;
}