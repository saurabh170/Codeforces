#include "iostream"
using namespace std;
int main()
{
	int n;
	cin>>n;
	int sx=0,sy=0,sz=0;
	for (int i = 0; i < n; ++i)
	{
		int x,y,z;
		cin>>x;
		cin>>y;
		cin>>z;
		sx=sx+x;
		sy=sy+y;
		sz=sz+z;
	}
	if (sx==0 && sy==0 && sz==0)
	{
		cout<<"YES\n";
	}
	else{
		cout<<"NO\n";
	}
	return 0;
}