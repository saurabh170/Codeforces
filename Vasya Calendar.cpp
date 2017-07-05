#include "iostream"
using namespace std;

int main()
{
	int d;
	cin>>d;
	int n;
	cin>>n;
	int s=0;
	for (int i = 0; i < n; ++i)
	{
		int k;
		cin>>k;
		if (i!=(n-1))
		{
			s=s+(d-k); 	
		} 
	}
	cout<<s<<endl;
	return 0;
}