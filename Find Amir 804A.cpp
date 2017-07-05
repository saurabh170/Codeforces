#include "iostream"
#include "cmath"
#include "stdlib.h"
using namespace std;
int main()
{
	int n;
	cin>>n;
	double f=float(n)/2.0;
	//cout<<f<<endl;
	int ans=ceil(f)-1;
	cout<<ans<<endl;
	return 0;
}