#include <stdio.h>
#include <stdlib.h>
struct node
{
	int data;
	struct node* lchild;
	struct node* rchild;
};
typedef struct node* NODE; 
NODE root=NULL;
NODE insert(int key,NODE node){
	NODE new;
	if (node == NULL)
	{
	NODE new=(NODE)malloc(sizeof(struct node));
	new->lchild=new->rchild=NULL;
	new->data=key;
	if (root==NULL)
		root=new;
	return new;
	}
	else if (key<node->data)
	{
		node->lchild=insert(key,node->lchild);
		return node;
	}
	else{
		node->rchild=insert(key,node->rchild);
		return node;
	}
	
}
void search(NODE rt,int key){
	if (rt!=NULL)
	{
		if (rt->data==key)
		{
			printf("KEY FOUND\n");
		}
		else if(key<rt->data){
			search(rt->lchild,key);
		}
		else{
			search(rt->rchild,key);
		}
	}
	else{
		printf("Key not FOUND\n");
		insert(key,rt);
	}

}
void inorder(NODE rt){
	if (rt!=NULL)
	{
	inorder(rt->lchild);
	printf("%d\n",rt->data );
	inorder(rt->rchild);
}}
void preorder(NODE rt){
	if(rt!=NULL){
	printf("%d\n",rt->data );
	preorder(rt->lchild);
	preorder(rt->rchild);
}}
void postorder(NODE rt){
	if(rt!=NULL){
	postorder(rt->lchild);
	postorder(rt->rchild);
	printf("%d\n",rt->data );
}}
void main()
{
int element;
int key;
int ch = 1;
while(ch == 1)
{
printf("Enter Element to insert in Binary Search Tree!\n");
scanf("%d", &element);
insert(element,root);
printf("Enter 1 to insert in binary search tree else 0 to stop\n");
scanf("%d", &ch);
}
NODE rt=root;
printf("PREORDER\n");
preorder(rt);
NODE t=root;
printf("\nPOSTORDER\n");
postorder(t);
NODE r=root;
printf("\nINORDER\n");
inorder(r);
printf("\n Enter Element to search in Binary Tree\n");
scanf("%d", &key);
search(root,key);
}