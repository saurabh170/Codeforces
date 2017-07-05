#include "iostream"
using namespace std;

struct node
{
	char data;
	struct node* next;
};

void addedge(struct node* a[],char u,char v){
	struct node* temp=(struct node*)malloc(sizeof(struct node));
	temp->data=v-65;
	temp->next=a[u-65];
	a[u]=temp;
}

int main()
{
	struct node* a[10];
	struct Time t[10];
	for (int i = 0; i < 10; ++i)
	{
		a[i]=NULL;
	}
	for (int i = 0; i < 3; ++i)
	{
		char b[3];
		cin>>b;
		if (b[1]=='>')
		{
			addedge(a,b[2],b[0]);
		}
		else{
			addedge(a,b[0],b[2]);
		}
	}

	return 0;
}