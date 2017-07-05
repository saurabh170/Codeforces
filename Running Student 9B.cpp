#include "iostream"
#include "cmath"
using namespace std;
int main(int argc, char const *argv[])
{
	int n,vb,vs;
	cin>>n>>vb>>vs;
	int a[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
	}
	int xu,yu;
	cin>>xu>>yu;
	if (vb<vs || a[0]>=xu)
	{
		cout<<"2"<<endl;
	}
	else
	{
		int i=1;
		while(i<(n-1)){
			//cout<<"ho"<<endl;
			double d=sqrt(pow((xu-a[i]),2)+pow(yu,2));
			double d2=a[i+1]-a[i];
			double d3=sqrt(pow((xu-a[i+1]),2)+pow(yu,2));
			double t1=d/vs;
			double t2=d2/vb+d3/vs;
			if (t1<t2)
			{
				break;
			}
			else{
				i++;
			}
		}
		cout<<(i+1)<<endl;
	}
	return 0;
}