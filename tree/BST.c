#include<stdio.h>
#include<stdlib.h>
typedef struct Tree
{
 int info;
 struct Tree *left,*right;
}node;
node *create();
void inorder(node *);
node *search(node *,int,node *);
node *searchp(node *,int,node *);
void insert(node *,int);
node *findmin(node *);
void deletion(node *,int);
void findParent(node*,int,node*);
int main()
{
 node *root,*p;
 int val,choice;
 printf("Create Tree");
 root=create();
 printf("\nCreated tree");
 inorder(root);
 do
 {
 printf("\n1-> Insert value");
 printf("\n2-> Delete value");
 printf("\n3-> Search value");
 printf("\n4-> Exit");
 printf("\nEnter your choice");
 scanf("%d",&choice);
 switch(choice)
 {
 case 1:printf("\nEnter value tobe insert");
 scanf("%d",&val);
 insert(root,val);
 printf("\nAfter insert tree=");
 inorder(root);
 break;
 case 2:printf("\nEnter value tobe delete");
 scanf("%d",&val);
 deletion(root,val);
 printf("\nAfter delete tree=");
 inorder(root);
 break;
 case 3:printf("\nEnter value tobe search");
 scanf("%d",&val);
 p=search(root,val,NULL);
 if(p!=NULL)
 printf("Node present at=%lu",p);
 else
 printf("Node not present");
 break;
 case 4:break;
 }
 }while(choice!=4);
 }
node * create()
{
 node *ne,*root=NULL,*temp;
 int val,n,i;
 printf("\nHow many values");
 scanf("%d",&n);
 printf("\nEnter values of tree");
 for(i=1;i<=n;i++)
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
 while(temp!=NULL)
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
 }/*if*/
 else if(val>temp->info)
 {
 if(temp->right==NULL)
 {
 temp->right=ne;
 break;
 }
 else
 temp=temp->right;
 }/*else*/
 }/*while*/
 }/*else*/
 }/*for*/
return(root);
}
void insert(node *root,int val)
{
 node *ne,*temp;
 ne=(node*)malloc(sizeof(node));
 ne->info=val;
 ne->left=NULL;
 ne->right=NULL;
 temp=root;
 while(temp!=NULL)
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
 }/*if*/
 else if(val>temp->info)
 {
 if(temp->right==NULL)
 {
 temp->right=ne;
 break;
 }
 else
 temp=temp->right;
 }/*else*/
 }/*while*/
 }
node * search(node *root,int val,node *parent)
{
 node *temp;
 temp=root;

 while(temp!=NULL)
 {

 if(val==temp->info)
 return(temp);
 else if(val<temp->info)
 {
 parent=temp;
 temp=temp->left;
 }/*if*/
 else if(val>temp->info)
 {
 parent=temp;
 temp=temp->right;
 }/*else*/
 }/*while*/
 return(NULL);
 }
node * searchp(node *root,int val,node *parent)
{
 node *temp;
 temp=root;

 while(temp!=NULL)
 {

 if(val==temp->info)
 return(parent);
 else if(val<temp->info)
 {
 parent=temp;
 temp=temp->left;
 }/*if*/
 else if(val>temp->info)
 {
 parent=temp;
 temp=temp->right;
 }/*else*/
 }/*while*/
 return(NULL);
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
/*
void delete(node **T,int val)
{
 node **p;
 //search value
 while(*T!=NULL && (*T)->info!=val)
 {
 if(val>*T->info)
 T=&((*T)->rigth);
 else
 T=&((*T)->left);
 }
 if(T!=NULL)
 {
 if((*T)->left==NULL && (*T)->right==NULL)
 *T=NULL;
 else
 if((*T)->right==NULL)
 *T=(*T)->left;
 else if((*T)->left==NULL)
 *T=(*T)->right;
 else
 {
 p=&((*T)->right);
 while((*p)->left!=NULL)
 p=&((*p)->left);
 (*T)->info=(*p)->info;
 *p=(*p)->right;
 }
 }
 */
 void deletion(node *root,int item)
 {
 node *parent=NULL;
 node *cur=root,*succ,*child;
 int val;
 cur=search(cur,item,parent);
 parent=searchp(root,item,parent);

 if(cur==NULL)
 return;

 if(cur->left==NULL && cur->right==NULL)
 {
 if(cur!=root)
 {
 if(parent->left==cur)
 {
 parent->left=NULL;
}
else
parent->right=NULL;
}
else
root=NULL;
free(cur);
}
else if(cur->left && cur->right)
{
succ=findmin(cur->right);
val=succ->info;
deletion(root,succ->info);
cur->info=val;
}
else
{
child=(cur->left)?cur->left:cur->right;
if(cur!=root)
{
if(cur==parent->left)
 parent->left=child;
else
parent->right=child;
}
else
root=child;
free(child);
}
 }

 node* findmin(node *p)
 {
 while(p->left!=NULL)
 {
 p=p->left;
 }
 return(p);
 }

void findParent(node *p,
 int val, node* parent)
{
 if (p == NULL)
 return;
 // If current node is the required node
 if (p->info == val) {
 return;
 // Print its parent
 //cout << parent;
 }
 else {
 // Recursive calls for the children
 // of the current node
 // Current node is now the ne parent
 findParent(p->left, val, p);
 findParent(p->right, val,p);
 }
}
