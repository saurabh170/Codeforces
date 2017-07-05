#include "iostream"
#include "stdio.h"
using namespace std;
struct ab
{
	int a;
	int b;
};

#include <stdlib.h>

void swap(struct ab* a, struct ab* b)
{
    struct ab t = *a;
    *a = *b;
    *b = t;
}
int partitionb (struct ab arr[], int low, int high)
{
    int pivot = arr[high].b;    // pivot
    int i = (low - 1);  // Index of smaller element
 
    for (int j = low; j <= high- 1; j++)
    {
        if (arr[j].b <= pivot)
        {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}
void quickSortb(struct ab arr[], int low, int high)
{
    if (low < high)
    {
        int pi = partitionb(arr, low, high);
        quickSortb(arr, low, pi - 1);
        quickSortb(arr, pi + 1, high);
    }
}
int partition (struct ab arr[], int low, int high)
{
    int pivot = arr[high].a;    // pivot
    int i = (low - 1);  // Index of smaller element
 
    for (int j = low; j <= high- 1; j++)
    {
        if (arr[j].a <= pivot)
        {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}
void quickSort(struct ab arr[], int low, int high)
{
    if (low < high)
    {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int main()
{
	int n;
	cin>>n;
	struct ab ab[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>ab[i].a;
		cin>>ab[i].b;
	}
	quickSortb(ab,0,n-1);
	quickSort(ab,0,n-1);
	int ans=ab[0].b;
	int j=1;
	// for (int i = 0; i < n; ++i)
	// {
	// 	cout<<ab[i].a<<" "<<ab[i].b<<endl;
	// }
	while(j<n){
		if (ans<=ab[j].b)
		{
			ans=ab[j].b;
		}
		else
		{
			ans=ab[j].a;
		}
		j++;
	}
	printf("%d\n",ans );
	return 0;
}