#include "iostream"
#include "string"
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	char a[n][m];
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
	}
	int count=0;
	for (int i = 0; i < n ;++i)
	{
		for(int j=0;j<m;j++){
			if (a[i][j]=='W')
			{
				if (j>0 && a[i][j-1]=='P')
				{
					//cout<<"hi1 "<<i<<" "<<j<<endl;
					count++;
					//a[i][j-1]='.';
				}
				else if (i>0 && a[i-1][j]=='P')
				{
					//cout<<"hi2 "<<i<<" "<<j<<endl;
					count++;
					//a[i-1][j]='.';
				}
				else if (j<m-1 && a[i][j+1]=='P')
				{
					//cout<<"hi3 "<<i<<" "<<j<<endl;
					count++;
					//a[i][j-1]='.';
				}
				else if (i<n-1 && a[i+1][j]=='P')
				{
					//cout<<"hi4 "<<i<<" "<<j<<endl;
					count++;
					//a[i+1][j]='.';
				}
			}
		}
	}
	// cout<<a[8][5]<<" ";
	// cout<<a[7][5]<<endl;
	cout<<count<<endl;
	return 0;
}