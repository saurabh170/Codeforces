#include "iostream"
using namespace std;
int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int a[n],max=-1,min=100000,i1,i2;
	//int c[1001]={0};
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
		if (max<a[i])
		{
			max=a[i];
			i2=i;
		}
		if (min>a[i])
		{
			min=a[i];
			i1=i;
		}
		
		//c[a[i]]++;
	}
	int il;
	float ss=a[i1]+a[i2],count2=0,count3=0,count1=0;
	for (int i = 0; i < n; ++i)
	{
		if (a[i]==max)
		{
			count2++;
		}
		if (a[i]==min)
		{
			count1++;
		}
		
	}
	int count4=0;
	for (int i = 0; i < n; ++i)
	{
		if (a[i]!=max && a[i]!=min)
		{
			count3++;
			il=i;
		}
	}
	if(n>2){
		for (int i = 0; i < n; ++i)
		{
			if (a[i]==a[il])
			{
				count4++;
			}
		}
	}
	//float ss=a[max]+a[min];
	ss=ss/2;
	int kk=(max-min)/2;
	int sss=ss;
	if (n==1)
	{
		cout<<"Exemplary pages."<<endl;
	}
	else if (count1==n)
	{
		cout<<"Exemplary pages."<<endl;
	}
	else if (count1>1 || count2>1 || count3!=(n-2) ||count4!=(n-2)|| ss!=sss)
	{
		cout<<"Unrecoverable configuration."<<endl;
	}
	else
	{
		if (n==2)
		{
			if (ss==sss)
			{
				cout<<kk<<" ml. from cup #"<<i1+1<<" to cup #"<<i2+1<<"."<<endl;
			}
			else{
				cout<<"Unrecoverable configuration."<<endl;
			}
			
		}
		else if (ss==a[il])
		{
			cout<<kk<<" ml. from cup #"<<i1+1<<" to cup #"<<i2+1<<"."<<endl;
		}
		else
		{
			cout<<"Unrecoverable configuration."<<endl;	
		}
	}
	// int count=0,count2=0,count3=0;
	// int aaaa[3]={0};
	// int kk=0;
	// for (int i = 0; i < 1001; ++i)
	// {
	// 	if (c[i]>0)
	// 	{
	// 		count++;
	// 		aaaa[kk]=i;
	// 		kk++;
	// 	}
	// 	if (c[i]>1)
	// 	{
	// 		count2++;
	// 	}
	// 	if (c[i]==1)
	// 	{
	// 		count3++;
	// 	}
	// }
	// if (count2!=1 && count!=1 && count!=2 && count3!=3)
	// {
	// 	cout<<"Unrecoverable configuration."<<endl;	
	// }
	// else if (count==1)
	// {
	// 	cout<<"Exemplary pages."<<endl;
	// }
	// else if (count==2)
	// {
	// 	//cout<<"he;lo";
	// 	if (count2>0)
	// 	{
	// 		cout<<"Unrecoverable configuration."<<endl;
	// 	}
	// 	else{
	// 		int sss;
	// 		float ss=float(aaaa[1]-aaaa[0])/2.0;
	// 		sss=ss;
	// 		if (ss+aaaa[0]==aaaa[1]-ss && sss==ss)
	// 		{
	// 			int i1=1,i2=2;
	// 			if (a[0]>a[1])
	// 			{
	// 				i1=2;
	// 				i2=1;
	// 			}
	// 			cout<<int(ss)<<" ml. from cup #"<<i1<<" to cup #"<<i2<<"."<<endl;	
	// 		}
	// 		else
	// 		{
	// 			cout<<"Unrecoverable configuration."<<endl;		
	// 		}
	// 	}
	// }
	// else if (count!=3)
	// {
	// 	cout<<"Unrecoverable configuration."<<endl;
	// }
	// else
	// {
	// 	float aa=float(aaaa[2]-aaaa[0])/2.0;
	// 	//cout<<aa<<" "<<aaaa[1]<<endl;
	// 	if ((aa+aaaa[0])==aaaa[1] && (-aa+aaaa[2])==aaaa[1])
	// 	{
	// 		int i1,i2;
	// 		for (int i = 0; i < n; ++i)
	// 		{
	// 			if (a[i]==aaaa[0])
	// 			{
	// 				i1=i+1;
	// 			}
	// 			if (a[i]==aaaa[2])
	// 			{
	// 				i2=i+1;
	// 			}
	// 		}
	// 		cout<<int(aa)<<" ml. from cup #"<<i1<<" to cup #"<<i2<<"."<<endl;
	// 	}
	// 	else
	// 	{
	// 		cout<<"Unrecoverable configuration."<<endl;			
	// 	}
	// }
	return 0;
}