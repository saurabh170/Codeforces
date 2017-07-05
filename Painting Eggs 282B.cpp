#include "iostream"
#include "ctype.h"
#include "math.h"
#include "cmath"
#include "stdlib.h"
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n],g[n];
	//char ans[n];
	long long sa=0,sg=0;
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i]>>g[i];			
		if (abs(sa-sg+a[i])<=500)
		{
			sa=sa+a[i];
			//ans[i]='A';
			cout<<"A";
		}
		else{
			sg=sg+g[i];
			//ans[i]='G';
			cout<<"G";
		}
	}
	return 0;
}