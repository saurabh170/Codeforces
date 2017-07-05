#include "iostream"
using namespace std;
int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int a[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
	}
	int count=1,m=1,im,count2=1;
	for (int i = 1; i < n; ++i)
	{
		if (i!=(n-1))
		{
			if (a[i]==a[i-1])
			{
				//cout<<"hii"<<endl;
				count2++;
			}
			else{
				count2=1;
			}
			if (a[i]<a[i+1] && a[i]<a[i-1])
			{
				
				count++;
				if (m<count)
				{
					m=count;
				}
				//cout<<"hello1\n";				
				count=1;
			}
			else if (count2>1 && a[i]<a[i+1] && a[i-count2]>a[i])
			{
				count++;
				if (m<count)
				{
					m=count;
				}
				//cout<<"hello2\n";
				count=count2;
			}
			else{
				//cout<<"hello3\n";
				count++;
				
			}
		}
		else{
			if (a[i]<=a[i-1])
			{
				count++;
			}
			else{
				count=1;
				int j=n-1;
				while(1){
					if (a[j]<a[j-1])
					{
						break;
					}
					else{
						count++;
					}
					j--;
				}
			}

		}
		if (m<=count)
		{
			im=i;
			m=count;
		}

		//cout<<i<<"="<<count<<" ";
		//cout<<endl;
	}
	//cout<<endl;
	cout<<m<<endl;

	return 0;
}