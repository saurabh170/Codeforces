#include "iostream"
using namespace std;
int main()
{
	int m,n;
	cin>>m>>n;
	int a[n][3];
	int ans[m]={0};
	
	for (int i = 0; i < n; ++i)
	{
		for(int j=0;j<3;j++){
			cin>>a[i][j];	
		}
		
		
		
	}
	int count=1;
	for (int i = 0; i < n; ++i)
	{
		for(int j=0;j<3;j++){
			if (ans[a[i][j]-1]==0)
			{
				ans[a[i][j]-1]=j+1;
			}
			else if (ans[a[i][j]-1]==(j+1))
			{
				continue;
			}
			else{
				if (j==0)
				{
					if (ans[a[i][j]-1]==2)
					{
						ans[a[i][j+1]-1]=1;
						ans[a[i][j+2]-1]=3;
					}
					else if (ans[a[i][j]-1]==3)
					{
						ans[a[i][j+1]-1]=1;
						ans[a[i][j+2]-1]=2;
					}
				}
				else if (j==1)
				{
					if (ans[a[i][j]-1]==1)
					{
						ans[a[i][j-1]-1]=2;
						ans[a[i][j+1]-1]=3;
					}
					else if (ans[a[i][j]-1]==3)
					{
						ans[a[i][j-1]-1]=1;
						ans[a[i][j+1]-1]=2;
					}
				}
				else if (j==2)
				{
					if (ans[a[i][j]-1]==2)
					{
						ans[a[i][j-1]-1]=1;
						ans[a[i][j-2]-1]=3;
					}
					else if (ans[a[i][j]-1]==1)
					{
						ans[a[i][j-1]-1]=3;
						ans[a[i][j-2]-1]=2;
					}
				}
				//i++;
				j=4;
			}
			
			//count++;
		}
	}
	for (int i = 0; i < m; ++i)
	{
		cout<<ans[i]<<" ";
	}
	cout<<endl;
	return 0;
}