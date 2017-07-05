#include "iostream"
#include "cstring"
using namespace std;
long long sum(long long x){
	long long p=x,sum=0;
	while(p!=0){
		sum=sum+p%10;
		p=p/10;
	}
	return sum;
}
int ans(long long n){
	int count=1;
	while(n>9){
		n=sum(n);
		count++;
	}
	return count;
}
int main()
{
	char c[100001];
	cin>>c;
	int n=strlen(c);
	int a[n];
	long long sum=0;
	for (int i = 0; i < n; ++i)
	{
		a[i]=c[i]-48;
		sum=sum+a[i];
	}
	if (n==1)
	{
		cout<<"0"<<endl;
	}
	else{
		int aa=ans(sum);
		cout<<aa<<endl;
	}
	return 0;
}