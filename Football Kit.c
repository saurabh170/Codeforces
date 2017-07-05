#include "stdio.h"

int main()
{
	int n;
	scanf("%d",&n);
	int hm[n];
	int aw[n];
	for (int i = 0; i < n; ++i)
	{
		scanf("%d %d",&hm[i],&aw[i]);		 
	}
	for (int i = 0; i < n; i++)
	{
		int chm=n-1;
		int caw=0;
		for(int j=0;j<n;j++){
			if (j!=i)
			{
				if (aw[i]==hm[j])
				{
					chm++;
				}
				else{
					caw++;
				}
			}
		}
		printf("%d %d\n",chm,caw );
	}
	return 0;
}