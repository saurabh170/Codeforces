#include "iostream"
#include "cstring"
using namespace std;
void african(int i,int j,char s,int n,int m,char a[][101]){
	int flag=0;
	for (int ii = i; ii <n ; ++ii)
	{
		for (int jj = j; jj <m ; jj++)
		{
			if (ii!=i || jj!=j )
			{
				if (a[ii][j]!=s)
				{
					cout<<"gii"<<endl;
					jj=m;
				}
				else{
					if (a[ii][jj]==s)
					{
						flag=1;
						a[ii][jj]='0';
						cout<<"ii="<<ii<<"jj="<<jj<<endl;
					}
				}
			}
		}
	}
	if (flag==1)
	{
		a[i][j]='0';
	}
}
int main()
{
	//cout<<"hello"<<endl;
	int n,m;
	cin>>n>>m;
	char a[n][101];
	//cout<<"hello"<<endl;
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
	}
	m=strlen(a[0]);
	for (int i = 0; i < n; ++i)
	{
		for(int j=0;j<m;j++){
			if (a[i][j]!='0')
			{
				african(i,j,a[i][j],n,m,a);
			}
		}
	}
	for (int i = 0; i < n; ++i)
	{
		for(int j=0;j<m;j++){
			if (a[i][j]!='0')
			{
				cout<<a[i][j];
			}
		}
	}
	return 0;
}