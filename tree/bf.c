/* C program to check if a tree is height-balanced or not */
#include <stdio.h>
#include <stdlib.h>
#define bool int
struct node {
	int data;
	struct node* left;
	struct node* right;
	
};
int height(struct node* node);
// bool isBalanced(struct node* root)
// {
// 	int lh; 
// 	int rh; 
//     if (root == NULL)
// 		return 1;
// 	lh = height(root->left);
// 	rh = height(root->right);

// 	if((lh - rh) <= 1 && isBalanced(root->left) && isBalanced(root->right))
// 		return 1;
//}

int max(int a, int b)
{
    int c=0;
     c=(a >= b) ? a : b;
	 printf("\n%d",c);
	 return(c);
}

int height(struct node* node)
{
   struct node * temp=NULL;
	if (node == NULL)
		return 0;
	 temp->info=1+max(height(node->left), height(node->right));
	 printf("%d\t",temp->info);
}







struct node* newNode(int data)
{
	struct node* node = (struct node*)
		malloc(sizeof(struct node));
	node->data = data;
	node->left = NULL;
	node->right = NULL;

	return (node);
}

int main()
{
	struct node* root = newNode(1);
	root->left = newNode(2);
	root->right = newNode(3);
	root->left->left = newNode(4);
	root->left->right = newNode(5);
	root->left->left->left = newNode(8);
    printf("tree=");
    height(root);
    
    
}

