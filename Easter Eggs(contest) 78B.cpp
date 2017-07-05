#include "iostream"
using namespace std;
int main()
{
	char a[10]={'R','O','Y','G','B','I','V'};
	char b[4]={'R','O','Y','G'};
	int n;
	cin>>n;
	int i=0,j=0;
	int ss=n%7;
	n=n-ss;
	while(i<n){
		if (j>6)
		{
			j=0;
		}
		cout<<a[j];
		i++;
		j++;
	}
	if (ss==0 || ss==1)
	{
		j=3;
		while(ss!=0){
			cout<<b[j];
			ss--;
			j--;
		}
	}
	else if (ss==2)
	{
		cout<<"YG";
	}
	else if (ss==4)
	{
		j=0;
		while(ss!=0){
			cout<<b[j];
			ss--;
			j++;
		}
	}
	else if (ss==3)
	{
		cout<<"YGB";
	}
	else{
		j=0;
		while(ss!=0){
			cout<<a[j];
			j++;
			ss--;
		}
	}	
	return 0;
}