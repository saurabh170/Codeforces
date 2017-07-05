#include "iostream"
using namespace std;
int main(int argc, char const *argv[])
{
	int x,k;
	cin>>x>>k;
	int a[x]={0};
	a[x-1]=1;
	for (int i = 0; i < k; ++i)
	{
		int s;
		cin>>s;
		if (s==1)
		{
			for (int i = 0; i < 2; ++i)
			{
				int p;
				cin>>p;
				a[p-1]=1;
			}
		}
		else{
			int p;
			cin>>p;
			a[p-1]=1;
		}
		
	}
	int count =0,count2=0;
	for (int i = 0; i < x; ++i)
	{
		if (a[i]==0)
		{
			count++;
		}
	}
	int i=0;
	while(i<(x-1)){
		if (a[i]==0 && a[i+1]==0)
		{
			count2++;
			i=i+2;
		}
		else{
				
			i++;	
		}
	}
	if (count%2==0)
	{
		cout<<count-count2<<" "<<count<<endl;
	}
	else{
		cout<<count-count2<<" "<<count<<endl;
	}
	return 0;
}