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

//Create Tree
node* createTree(node* root){
int n;
printf("Provide data for Node : ");
scanf("%d",&n);
if(n==-1){
return NULL;
}
root=createNode(n);
printf("For left of %d :\n",n);
root->left=createTree(root->left);
printf("For right of %d :\n",n);
root->right=createTree(root->right);

return root;
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

//main
void main(){
int n,m;
root=createTree(root);
printf("Post-Order\n");
displayPost(root);
printf("Pre-Order\n");
displayPre(root);
printf("In-Order\n");
displayIn(root);

n=heightTree(root);
printf("Height Of Tree is : %d\n",n);
}
