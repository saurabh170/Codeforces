#include "iostream"
#include "string"
#include "cstring"
using namespace std;
int main()
{
	char a[51],count4=0,count7=0;
	cin>>a;
	for (int i = 0; i < strlen(a); ++i)
	{
		if (a[i]=='4')
		{
			count4++;
		}
		else if (a[i]=='7')
		{
			count7++;
		}
	}
	if (count4>=count7 && count4>0)
	{
		cout<<"4"<<endl;
	}
	else if (count7>0)
	{
		cout<<"7\n";
	}
	else{
		cout<<"-1\n";
	}
	return 0;
}