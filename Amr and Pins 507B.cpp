#include "iostream"
#include "math.h"
using namespace std;
int main()
{
	int r,x,y,x1,y1;
	cin>>r>>x>>y>>x1>>y1;
	float d=ceil(sqrt(pow((x-x1),2)+pow((y-y1),2)));
	// cout<<d<<endl;
	int ans=ceil(d/(2*r));
	if (d>(2*r) && d<(4*r))
	{
		cout<<"2"<<endl;
	}
	else{
		cout<<ans<<endl;	
	}
	return 0;
}