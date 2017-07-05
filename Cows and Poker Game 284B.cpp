#include "iostream"
using namespace std;
int main(int argc, char const *argv[])
{
	int n,counta=0,counti=0;
	cin>>n;
	char a[n];
	cin>>a;
	for (int i = 0; i < n; ++i)
	{
		if (a[i]=='A')
		{
			counta++;
		}
		else if (a[i]=='I')
		{
			counti++;
		}
	}
	if (counti>1)
	{
		cout<<"0"<<endl;
	}
	else if (counti==1)
	{
		cout<<"1"<<endl;
	}
	else
	{
		cout<<counta<<endl;
	}
	return 0;
}