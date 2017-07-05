#include "iostream"
using namespace std;
int main()
{
	int d,sum;
	cin>>d>>sum;
	int minsum[d],maxsum[d];	
	int ans[d];
	int mins=0,maxs=0;
	for (int i = 0; i < d; ++i)
	{
		cin>>minsum[i];
		cin>>maxsum[i];
		ans[i]=minsum[i];
		mins+=minsum[i];
		maxs+=maxsum[i];
	}
	if (sum<mins || sum>maxs)
	{
		cout<<"NO"<<endl;
	}
	else
	{
		cout<<"YES"<<endl;
		sum=sum-mins;

		int j=0;
		while(1){
			if (sum>(maxsum[j]-minsum[j]))
			{
				ans[j]=ans[j]+maxsum[j]-minsum[j];

				//cout<<"Hh"<<endl;
				sum=sum-(maxsum[j]-minsum[j]);
			}
			else{
				ans[j]=ans[j]+sum;
				break;
			}
			
			j++;
		}
		//cout<<"gre"<<endl;
		for (int ii = 0; ii < d; ++ii)
		{
			cout<<ans[ii]<<" ";
		}
		cout<<endl;
	}
	//cout<<sum;
	return 0;
}