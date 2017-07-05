#include <iostream>
#include <fstream>
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;

int main()
{
	ifstream fin("input.txt");
	ofstream fout("output.txt");
	int n,k;
	fin>>n;
	fin>>k;
	int b[n];
	int count[101];
	for (int i = 0; i < 101; ++i)
	{
		count[i]=0;
	}
	for (int i = 0; i < n; ++i)
	{
		fin>>b[i];
		count[b[i]]++;		
	}
	int min,ss=0;
	int j=100;
	int a[k];
	int p=0;
	int index[k];
	while(ss!=k){
		if (count[j]!=0)
		{
			ss++;
			a[p]=j;
			p++;
			count[j]--;
		}
		else{
			j--;
		}
	}
	fout<<j<<endl;
	
	int i=0,jj=0,kk=0;
	while(kk<k){
		if (b[i]==a[jj])
		{
			index[kk]=i+1;;
			jj++;
			kk++;
			b[i]=-100;
			i=0;
		}
		else{
			i++;
		}
	}
	sort(index,index+k);
	for (int i = 0; i < k; ++i)
	{
		fout<<index[i]<<" ";
	}
	return 0;
}