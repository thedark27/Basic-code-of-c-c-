//Binary search Tree and search element and to find the maximum element :-
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
int findmax(struct BstNode *root)
{
	int val,max=-1,right,left;
	if(root!=NULL)
	{
		val=root->data;
		left=findmax(root->left);
		right=findmax(root->right);
		if(left>right)
		max=left;
		else
		max=right;
		if(max<val)
		max=val;
	}
	return max;
}
int Search(struct BstNode *root,int data)
{
	if(root == NULL) {
		return -1;
	}
	else if(root->data == data) {
		return 1;
	}
	else if(data <= root->data) {
		return Search(root->left,data);
	}
	else {
		return Search(root->right,data);
	}
}
int main()
{
struct 	BstNode* root = NULL; 
	root = Insert(root,15);	
	root = Insert(root,10);	
	root = Insert(root,20);
	root = Insert(root,3);
	root = Insert(root,8);
	root = Insert(root,12);
	root=Insert(root,9);
	root=Insert(root,5);
	display(root);
	int c=findmax(root);
printf("\n");
printf("Maximum Value in Binary Tree = %d",c);
printf("\n");
printf("Enter the Element to be Searched\n");
int p;
scanf("%d",&p);
int z=Search(root,p);
if(z==1)
{
printf("Element is present");
}
else
printf("Element is not present");
return 0;
}
