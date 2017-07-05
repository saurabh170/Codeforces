#include "iostream"
#include "math.h"
using namespace std;
int sumDigit(int i){
	int sum=0;
	int k=i;
	while(k!=0){
		sum=sum+k%10;
		k=k/10;
	}
	return sum;
}
int main(int argc, char const *argv[])
{
	int m,s;
	cin>>m>>s;
	int p=pow(10,(m-1));
	int pp=pow(10,m)-1;
	int flag1=0,flag2=0;
	int s1=-1,s2=-1;
	//cout<<p<<" "<<pp;
	for (int i = p; i < pp; ++i)
	{
		//cout<<sumDigit(i);
		if (sumDigit(i)==s)
		{
			//cout<<i<<" ";
			s1=i;
			flag1=1;
			break;
		}
	}
	for (int i = pp-1; i >=p; i--)
	{
		if (sumDigit(i)==s)
		{
			s2=i;
			//cout<<i<<endl;
			flag2=1;
			break;
		}
	}
	cout<<s1<<" "<<s2;
	return 0;
}