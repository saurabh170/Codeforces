#include "iostream"
using namespace std;
int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int a[2002]={0};
	for (int i = 0; i < n; ++i)
	{
		int aa;
		cin>>aa;
		a[aa+1]++;
	}
	int count=0;
	for (int i = 0; i < 2002; ++i)
	{
		if (a[i]!=0)
		{
			count++;
		}
	}
	cout<<count<<endl;
	return 0;
}