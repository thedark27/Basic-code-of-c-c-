//Binary Search Tree and it's size :-
#include<stdio.h>
#include<malloc.h>
struct BstNode {
	int data; 
	struct BstNode* left;
	struct BstNode* right;
};
struct BstNode* Insert(struct BstNode* temp,int data) 
{
	if(temp == NULL) 
	{
	struct BstNode *n;
	n=(struct BstNode *)malloc(sizeof(struct BstNode));
	n->data=data;
	n->left=n->right=NULL;
	temp=n; 
}
	else if(data <= temp->data)
	 {
		temp->left = Insert(temp->left,data);
	}
	else {
		temp->right = Insert(temp->right,data);
	}
	return temp;
}
void display(struct BstNode* root)
{
if(root)
{
	printf("\nData is : %d",root->data);
	display(root->left);
	display(root->right);
}	
}
int sizeofBT(struct BstNode *root)
{
	if(root==NULL)
	{
		return 0;
	}
	else
	{
		return (sizeofBT(root->left)+1+(sizeofBT(root->right)));
	}
}
int main()
{
struct 	BstNode* root = NULL; 
	root = Insert(root,15);	
	root = Insert(root,10);	
	root = Insert(root,20);
	root = Insert(root,25);
	root = Insert(root,8);
	root = Insert(root,12);
	root=Insert(root,9);
	root=Insert(root,5);
	display(root);
	int c=sizeofBT(root);
	printf("\n");
	printf("%d",c);
	return 0;
}
