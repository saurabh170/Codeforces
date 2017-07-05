#include "iostream"
using namespace std;
char s[4]={'a','b','c','d'};
int main()
{
	int n;
	cin>>n;
	int j=0;
	for (int i = 0; i < n; ++i)
	{
		cout<<s[j];
		j++;
		if (j==4)
		{
			j=0;
		}
	}
	cout<<endl;
	return 0;
}