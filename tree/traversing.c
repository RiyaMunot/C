/*Recursive Function for Inorderd Traversal*/
#include<stdio.h>
#include<stdlib.h>
typedef struct tree
{
	int info;
	struct tree *left,*right;
}node;
node * create();
void inorder(node *);
void preorder(node *);
void postorder(node *);
int count(node *);
int sum(node *);
int leaf_count(node *);
node * copy(node *);
void mirror(node *);
//int compare(node *,node *);
int main()
{ 
  node *root;
  int choice,ct=0,s=0;
  root=create();
  printf("\nTree Created");
  do
  {
	printf("\n--------------------------------------------------------");
  	printf("\n1->Inorder");
  	printf("\n2->Preorder");
  	printf("\n3->Postorder");
	printf("\n4->No. of nodes");
	printf("\n5->Sum of elements");
	printf("\n6->No. of leaf nodes");
	printf("\n7->copy Tree");
	printf("\n8->mirror of Tree");
//	printf("\n9->Compare")
  	printf("\n9->Exit");
	printf("\n--------------------------------------------------------");
  	printf("\nEnter your choice");
  	scanf("%d",&choice);
  	switch(choice)
  	   {
  		  case 1:printf("\n1Inorder Traversal");
  		         inorder(root);
  		         break;
  		  case 2:printf("\nPreorder Traversal");
  		         preorder(root);
  		         break;
  	   	  case 3:printf("\nPostorder Traversal");
  		         postorder(root);
  		         break;
		  case 4:ct=count(root);
  		         printf("\nNo of nodes=%d",ct);
  		         break;
		  case 5:s=sum(root);
  		         printf("\nsum of elements=%d",s
				   );
  		         break;
  		         
		  case 6:ct=leaf_count(root);
  		         printf("\nNo of leaf nodes=%d",ct);
  		         break;
		  case 7:printf("\nAfter copy");
  		         copy(root);
  		         break;
		  case 8:printf("\nMirror of tree");
  		         mirror(root);
  		         break;		   
		  case 9:break;
	    }
    }while(choice!=10);
}
  
  
node* create()
 {
  	int val,n,i;
  	node *ne,*temp,*root=NULL;
  	printf("\n How many values you want");
  	scanf("%d",&n);
  	printf("\n Enter values");
  	for(i=0;i<=n;i++)
  	{
  		scanf("%d",&val);
  		ne=(node*)malloc(sizeof(node));
  		ne->info=val;
  		ne->left=NULL;
  		ne->right=NULL;
  		if(root==NULL)
  		 root=ne;
  		else
  		{
  			temp=root;
  			while(1)
  			{
  				if(val<temp->info)
  				{
  				     if(temp->left==NULL)
  				    {
  				    	temp->left=ne;
  				    	break;
					}
					  else
					    temp=temp->left;
				}
				else if(val>temp->info)
				{
					if(temp->right==NULL)
					{
						temp->right=ne;
						break;
					}
				   	else
					    temp=temp->right;
				 }  
  				
	 	 	 }
	      	}
      }
	return(root);
 }
void inorder(node *root)
{
	node *temp=root;
	if(temp!=NULL)
	{
		inorder(temp->left);
		printf("%d\t",temp->info);
		inorder(temp->right);
	}
}
void preorder(node *root)
{
	node *temp=root;
	if(temp!=NULL)
	{
		printf("%d\t",temp->info);
		inorder(temp->left);
		inorder(temp->right);
	}
}
void postorder(node *root)
{
	node *temp=root;
	if(temp!=NULL)
	{
		inorder(temp->left);
		inorder(temp->right);
		printf("%d\t",temp->info);
	}
}
int count(node *root)
{
	node *temp=root;
	static int ct=0;
	if(temp!=NULL)
	{
		ct++;
		count(temp->left);
		count(temp->right);
	}
	return(ct);
}
int sum(node *root)
{
	node *temp=root;
	static int s=0;
	if(temp!=NULL)
	{
		s=s+temp->info;
		sum(temp->left);
		sum(temp->right);
	}\
	return(s);
}
int leaf_count(node *root)
{
	node *temp=root;
	static int ct=0;
	if(temp!=NULL)
	{
		leaf_count(temp->left);
		leaf_count(temp->right);
		if(temp->left==NULL&&temp->right==NULL)
		ct++;
	}
	return(ct);
}
node *copy(node *root)
{
	node *new,*temp=root;
	if(temp!=NULL)
	{
		new=(node*)malloc(sizeof(node));
		new->left=copy(temp->left);
		new->right=copy(temp->right);
		new->info=copy(temp->info);
	}
	return(new);
}
void mirror(node *root)
{
	node *temp=root,*t;
	if(temp!=NULL)
	{
		if(temp->left!=NULL)
		mirror(temp->left);
		if(temp->right!=NULL)
		mirror(temp->right);
		t=temp->left;
		temp->left=temp->right;
		temp->right=t;
	}
}

