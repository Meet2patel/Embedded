#include<stdio.h>
#include<stdlib.h>

typedef struct node{
int data;
struct node* left;
struct node* right;
}node;

node* root;
node* ptr;
// Create Node
node* createNode(int n){
node* new=malloc(sizeof(node));
new->data=n;
new->left=NULL;
new->right=NULL;
return new;
}


//Display Post
void displayPost(node* ptr){
if(ptr->left!=NULL){
displayPost(ptr->left);
}
if(ptr->right!=NULL){
displayPost(ptr->right);
}
printf("%d\n",ptr->data);
}

//Display Pre
void displayPre(node* ptr){
printf("%d\n",ptr->data);
if(ptr->left!=NULL){
displayPre(ptr->left);
}
if(ptr->right!=NULL){
displayPre(ptr->right);
}
}

//Display Inorder
void displayIn(node* ptr){
if(ptr->left!=NULL){
displayIn(ptr->left);
}
printf("%d\n",ptr->data);
if(ptr->right!=NULL){
displayIn(ptr->right);
}
}

//Height of tree
int heightTree(node* root){
int x,y;
if(root==NULL){
return 0;
}
x=heightTree(root->left);
y=heightTree(root->right);
if(x>y)
return x+1;
else
return y+1;
} 

//Binary Search Tree
node* binarySearch(node* root,int num){
if(root==NULL){
node* new=createNode(num);
return new;

}

if(num<root->data){
root->left=binarySearch(root->left,num);
}
else if(num>root->data){
root->right=binarySearch(root->right,num);
}
else
printf("input is not valid.\n");

return root;
}

//min
node* min(node* root){

if(root->left==NULL){
return root;
}
min(root->left);

}

//max
node* max(node* root){

if(root->right==NULL){
return root;
}
max(root->right);

}

//Deletion of Node
node* deleteNode(node* root,int num){
if(root==NULL)
return root;

if(root->data<num){
	root->right=deleteNode(root->right,num);
}
else if(root->data>num){
	root->left=deleteNode(root->left,num);
}
else{
	if(root->left==NULL){
	node* temp=root->right;
	free(root);
	return temp;
	}
	else if(root->right==NULL){
	node* temp=root->left;
	free(root);
	return temp;
	}
	node* temp=min(root->right);
	root->data=temp->data;
	root->right=deleteNode(root->right,temp->data);
}

return root;
}

//main
void main(){
int n=0,m=1,num,d;

while(m!=0){

printf("Press 1 for Insert node\nPress 2 for Delete node\nPress 3 for Display tree\nPress 0 to Exit\n");
scanf("%d",&m);

switch(m){
case 1:
	n=0;
	while(n!=-1){
	printf("Enter the data : ");
	scanf("%d",&n);
	if(n!=-1)
	root=binarySearch(root,n);
	}
	break;
case 2: 
	printf("Enter Value of node you want to delete : ");
	scanf("%d",&num);
	deleteNode(root,num);
	break;
case 3:
	printf("Press 1 for Inorder\nPress 2 for Pre-order\nPress 3 for Post-order\n");
	scanf("%d",&d);
	switch(d){
	case 1:
		printf("In-Order\n");
		displayIn(root);
		break;
	case 2:
		printf("Pre-Order\n");
		displayPre(root);
		break;
	case 3:
		printf("Post-Order\n");
		displayPost(root);
		break;	
	}
	break;
}
}
}
