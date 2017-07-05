#include "iostream"
using namespace std;
int main()
{
	int n;
	cin>>n;
	//n=n+1;
	int a[n];	
	int energy=0;
	//int height=0;
	//cout<<n<<endl;
	for (int i = 0; i < n; i++)
	{
		//cout<<"i= "<<i<<endl;	
		cin>>a[i];
	}
	
	int i=0;
	int dollor=a[0];
	while(i<(n-1))
	{
		energy=energy+(a[i]-a[i+1]);
		if (energy<0)
		{
			dollor=dollor+(-1)*energy;
			energy=0;
		}
		i++;
	}
	cout<<dollor<<endl;
	return 0;
}