#include "iostream"
#include "cstring"
using namespace std;
int main(int argc, char const *argv[])
{
	char a[101];
	cin>>a;
	int n=strlen(a);
	char ans[202];
	int flag=0,j=-1;
	for (int i = 0; i < strlen(a); ++i)
	{
		if (a[i]=='-')
		{
			flag=1;
		}
		if (a[i]=='.')
		{
			j=i;
		}
	}
	//cout
	int k=0;
	if (flag==0)
	{
		if (j==-1)
		{
			ans[k++]='0';
			ans[k++]='0';
			ans[k++]='.';
			int i=strlen(a)-1,count=0;
			while(i>=0){
				ans[k]=a[i];
				count++;
				k++;
				i--;
				if (count==3)
				{
					if (i>=0)
					{
						ans[k]=',';
						k++;		
					}
					count=0;					
				}
				//cout<<"hello";
				//cout<<"1"<<ans[k]<<endl;
			}

			ans[k++]='$';
			ans[k]='\0';
		}
		else
		{
			k=0;
			int i=j-1,count=0;
			if (j==(n-2))
			{
				ans[k++]='0';
				ans[k++]=a[j+1];
				ans[k++]=a[j];
			}
			else{
				ans[k++]=a[j+2];
				ans[k++]=a[j+1];
				ans[k++]=a[j];	
			}
			while(i>=0){
				ans[k]=a[i];
				count++;
				k++;
				i--;
				if (count==3)
				{
					if (i>=0)
					{
						ans[k]=',';
						k++;		
					}
					count=0;					
				}
			}
			ans[k++]='$';
			ans[k]='\0';
		}
		int lans=strlen(ans);
		for (int i = lans-1; i>=0 ; i--)
		{
			cout<<ans[i];
		}
		cout<<endl;
	}
	else
	{
		k=0;
		if (j==-1)
		{
			ans[k++]='0';
			ans[k++]='0';
			ans[k++]='.';
			int i=strlen(a)-1,count=0;
			while(i>0){
				ans[k]=a[i];
				count++;
				k++;
				i--;
				if (count==3)
				{
					if (i>0)
					{
						ans[k]=',';
						k++;		
					}
					count=0;					
				}
				//cout<<"hello";
				//cout<<"1"<<ans[k]<<endl;
			}

			ans[k++]='$';
			ans[k]='\0';
		}
		else
		{
			k=0;
			int i=j-1,count=0;
			if (j==(n-2))
			{
				ans[k++]='0';
				ans[k++]=a[j+1];
				ans[k++]=a[j];
			}
			else{
				ans[k++]=a[j+2];
				ans[k++]=a[j+1];
				ans[k++]=a[j];	
			}
			while(i>0){
				ans[k]=a[i];
				count++;
				k++;
				i--;
				if (count==3)
				{
					if (i>0)
					{
						ans[k]=',';
						k++;		
					}
					count=0;					
				}
			}
			ans[k++]='$';
			ans[k]='\0';
		}
		int lans=strlen(ans);
		cout<<"(";
		for (int i = lans-1; i>=0 ; i--)
		{
			cout<<ans[i];
		}
		cout<<")";
		cout<<endl;
	}	
	return 0;
}