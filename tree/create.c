#include<stdio.h>
#include<stdlib.h>
struct node
{
  int info;
  struct node* left;
   struct node* right;
};
typedef struct node* NODEPTR;
NODEPTR create();
void inorder(NODEPTR);
void preorder(NODEPTR);
void postorder(NODEPTR);
int search(NODEPTR,int);
int count(NODEPTR);
int leaf_count(NODEPTR);
NODEPTR delete(NODEPTR,int);
void insert(NODEPTR,int);
int minimum(NODEPTR);
int main()
{
NODEPTR tree,p,temp;
int choice,val,i=0;
tree=create();
printf("\n Tree is created\n");
printf("----------------------------------------------------------------");
{
printf("\n1->inorder");
printf("\n2->preorder");
printf("\n3->postorder");
printf("\n4->search");
printf("\n5->count node");
printf("\n6->count leaf node");
printf("\n7->sum of nodes");
printf("\n8->delete node");
printf("\n9->insert nodes");
printf("\n10->Exit\n");
printf("--------------------------------------------------------------------");
printf("\nEnter Your Choice=");
scanf("%d",&choice);
switch(choice)
{
case 1:printf("\ninorder Traversal");
       inorder(tree);
       break;
case 2:printf("\npreorder Traversal");
       preorder(tree);
       break;
case 3:printf("\npostorder Traversal");
       postorder(tree);
       break;
case 4:printf("\nEnter value to be search");
       scanf("%d",&val);
       p=search(tree,val);
       if(tree!=NULL)
       printf("node is present at=%lu",p);
       else
       printf("node not present");
       break;
case 5:val=count(tree);
       printf("\nno. of nodes=%d",val);
       break;
case 6:val=leaf_count(tree);
       printf("\nno. of leaf nodes=%d",val);
       break;
case 7:i=sum(tree);
       printf("\nsum of nodes=%d",i);
       break;
case 8:printf("\nEnter value to be delete");
       scanf("%d",&val);
       delete(tree,val);
       printf("After deletion tree=");
       inorder(tree);
       break;
case 9:printf("\nEnter value to be insert");
       scanf("%d",&val);
       insert(tree,val);
       printf("After insert tree=");
       inorder(tree);
       break;
case 10:break;
}
}while(choice!=10);
}
NODEPTR create()
{
  NODEPTR tree=NULL,newnode=NULL,p=NULL;
  char ans;
  do
   {
    newnode=(NODEPTR)malloc(sizeof(struct node));
    newnode->left=newnode->right=NULL;
    printf("Enter data\n");
    scanf("%d",&newnode->info);
    
    if(tree==NULL)
    {
      tree=newnode;
     // p=newnode;
    }
   else
     {
       p=tree;
     while(p!=NULL)
     {
       if(newnode->info < p->info)
       {
          if(p->left==NULL)
          {
            p->left=newnode;
            break;
          }
      else
          p=p->left;
      }
       else
      {
        if(p->right==NULL)
        {
            p->right=newnode;
            break;
        }
      else
         p=p->right;
      }
    }
  }
  printf("Do You Want To continue(Y/N)?");
  scanf("%c",&ans);
  ans=getchar();
 }while(ans=='Y'||ans=='y');
 return(tree);
}


void preorder(NODEPTR tree)
{
  if(tree!=NULL)
  {
    printf("%d\t",tree->info);
    preorder(tree->left);
    preorder(tree->right);
  }
}


void inorder(NODEPTR tree)
{
  if(tree!=NULL)
  {
    inorder(tree->left);
    printf("%d\t",tree->info);
    inorder(tree->right);
  }
}


void postorder(NODEPTR tree)
{
  if(tree!=NULL)
  {
    postorder(tree->left);
    postorder(tree->right);
    printf("%d\t",tree->info);
  }
}


int count(NODEPTR tree)
{
  static int ct=0;
  if(tree!=NULL)
  {
   ct++;
   count(tree->left);
   count(tree->right);
  }
  return(ct);
}


int leaf_count(NODEPTR tree)
{
  static int ct=0;
  if(tree!=NULL)
  {
   leaf_count(tree->left);
   leaf_count(tree->right);
   if(tree->left==NULL&&tree->right==NULL)
   ct++;
  }
  return(ct);
}


int search(NODEPTR tree,int val)
{
  while(tree!=NULL)
  {
    if(val==tree->info)
    return tree;
    else if(val<tree->info)
    tree=tree->left;
    else if(val>tree->info)
    tree=tree->right;
  }
  return tree;
}


int sum(NODEPTR tree)
{
  NODEPTR temp=tree;
  static int s=0;
  if(temp!=NULL)
  {
    s=s+temp->info;
    sum(temp->left);
    sum(temp->right);
  }
  return(s);
}


int minimum(NODEPTR tree)
{
  if(tree->left==NULL)
   return tree->info;
    return minimum(tree->left);
}

NODEPTR delete(NODEPTR tree,int val)
{
  if(tree==NULL)
  return NULL;
  if(tree->info<val)
   tree->right=delete(tree->right,val);
  else if(tree->info > val)
    tree->left=delete(tree->left,val);
  else
  {
    if(tree->left==NULL&&tree->right==NULL)
     {
       free(tree);
       return NULL;
      }
     else if(tree->left==NULL)
     {
       NODEPTR temp=tree->right;
       free(tree);
       return(temp);
     }
     else if(tree->right==NULL)
     {
       NODEPTR temp=tree->left;
       free(tree);
       return(temp);
     }
     else
     {
      int min=minimum(tree->right);
      tree->info=min;
      tree->right=delete(tree->right,min);
     }
   }
   return tree;
}


void insert(NODEPTR tree,int val)
{
 NODEPTR new,temp;
 temp=tree;
 new=(NODEPTR)malloc(sizeof(struct node));
 new->info=val;
 new->left=NULL;
 new->right=NULL;
 while(temp!=NULL)
 {
  if(val<temp->info)
  {
   if(temp->left==NULL)
   {
    temp->left=new;
    break;
   }
   else
    temp=temp->left;
   }
  else if(val>temp->info)
  {
   if(temp->right==NULL)
   {
    temp->right=new;
    break;
   }
  else
   temp=temp->right;
  }
}
}








