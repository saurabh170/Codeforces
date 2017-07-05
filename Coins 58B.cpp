#include "iostream"
using namespace std;
int main()
{
	int n;
	cin>>n;
	int i=n;
	while(i>0){
		if (n%i==0)
		{
			cout<<i<<" ";
			n=i;
		}
		i--;
	}
	cout<<endl;
	return 0;
}