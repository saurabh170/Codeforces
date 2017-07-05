#include "iostream"
using namespace std;
int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int ss=n/28;
	//cout<<ss<<endl;
	int pp=n%28;
	int a=0,b=0,bfinal=0,sp=n,kk=n;
	while(kk>=0){
		
		//int 
		if (kk%4==0)
		{
			//cout<<"hoo"<<endl;
			a=kk/4;
			bfinal=b;
		}
		b++;
		kk=n-7*b;
		//sp=kk;
	}
	//cout<<a<<" "<<bfinal<<" "<<ss<<" "<<pp<<endl;
	if (a==0 && bfinal==0)
	{
		cout<<"-1"<<endl;
	}
	else
	{
		for (int i = 0; i < a; ++i)
		{
			cout<<"4";
		}
		for (int i = 0; i < bfinal; ++i)
		{
			cout<<"7";
		}
		// for (int i = 0; i < ss; ++i)
		// {
		// 	cout<<"7777";
		// }
		cout<<endl;
	}
	return 0;
}