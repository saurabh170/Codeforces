#include "stdio.h"
float pi=3.1415926536;
int poww(int a,int b){
	if (b==0)
	{
		return 1;
	}
	else if (b==1)
	{
		return a;
	}
	else{
		return a*poww(a,b-1);
	}
}
void swap(int a[],int i, int j) {
   int temp = a[i];
   a[i] = a[j];
   a[j] = temp;
}

int partition(int a[], int i, int j, int p) {
   int l = i;
   int r = j;

   while(l<=r) {
      while(a[l] < p) {
         l++;
      }
		
      while(r > 0 && a[r] >=p) {
         r--;
      }

      if(l >= r) {
         break;
      } else {
         swap(a,l,r);
      }
   }
   swap(a,l,j);
   return l;
}

void quickSort(int a[],int i, int j) {
   if(j>i){
      int p = a[j];
      int k = partition(a,i,j,p);
      quickSort(a,i,k-1);
      quickSort(a,k+1,j);
   }        
}

int main()
{
	int n;
	scanf("%d",&n);
	int a[n];
	for (int i = 0; i < n; ++i)
	{
		scanf("%d",&a[i]);
	}
	quickSort(a,0,n-1);
	int s=0;
	if (n%2==1)
	{
		for (int i = 0; i < n; ++i)
		{
			s=s+poww(a[i],2)*poww(-1,i);
		}
	}
	else{
		for (int i = 0; i < n; ++i)
		{
			s=s+poww(a[i],2)*poww(-1,i+1);
		}
	}
	//printf("%d\n",s );
	float ans=s*pi;
	printf("%.10f\n",ans );
	return 0;
}