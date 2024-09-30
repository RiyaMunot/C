#include<stdio.h>
#include<stdlib.h>
struct node
{
	int info;
	struct node* left;
	struct node* right;
};
typedef struct node* NODEPTR;
NODEPTR create()
{
	NODEPTR newnode,temp,tree=NULL;
	int i,n,val;
	printf("\nHow many values you want");
	scanf("%d",&n);
	printf("Enter values");
	for(i=0;i<=n;i++)
 {
	scanf("%d",&val);
	newnode=(NODEPTR)malloc(sizeof(struct node));
	newnode->info=val;
	newnode->left=NULL;
	newnode->right=NULL;
	if(tree==NULL)
	tree=newnode;
	else
	{
		temp=tree;
	    while(1)
   	  {
		if(val<temp->info)
		{
			if(temp->left==NULL)
			{
				temp->left=newnode;
				break;
			}
			else
			temp=temp->left;
		}
		else if(val>temp->info)
		{
			if(temp->right==NULL)
			{
				temp->right=newnode;
				break;
			}
			else
			temp=temp->right;
		}
	}
}


 }
return(tree);
}
int main()
{
	NODEPTR tree;
	tree=create();
	printf("tree is created");
}
