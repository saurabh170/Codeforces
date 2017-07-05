#include "stdio.h"
#include <stdlib.h>

struct dragon{
	int xi,yi;
};

void swap(struct dragon a[],int i, int j) {
   struct dragon temp = a[i];
   a[i] = a[j];
   a[j] = temp;
}

int partition(struct dragon a[], int i, int j, int p) {
   int l = i;
   int r = j;

   while(l<=r) {
      while(a[l].xi < p) {
         l++;
      }
		
      while(r > 0 && a[r].xi >=p) {
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

void quickSort(struct dragon a[],int i, int j) {
   if(j>i){
      int p = a[j].xi;
      int k = partition(a,i,j,p);
      quickSort(a,i,k-1);
      quickSort(a,k+1,j);
   }        
}

int main()
{
	int s,n;
	scanf("%d%d",&s,&n);
	struct dragon d[n];
	int flag=0;
	for (int i = 0; i < n; ++i)
	{
		scanf("%d%d",&d[i].xi,&d[i].yi);
		if(d[i].xi<s){
			flag=1;
		}
	}
	int ff=0;
	if (flag==0)
	{
		printf("NO\n");
	}
	
	else{
		quickSort(d,0,n-1);
		for (int i = 0; i < n; ++i)
		{
			if (s>d[i].xi)
			{
				s=s+d[i].yi;
			}
			else{
				ff=1;
				break;
			}
		}
		if (ff==1)
		{
			printf("NO\n");
		}
		else{
			printf("YES\n");
		}
	}
	return 0;
}