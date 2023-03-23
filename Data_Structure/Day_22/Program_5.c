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
int min(node* root){

if(root->left==NULL){
printf("%d is Minimum\n",root->data);
return 0;
}
min(root->left);

}

//max
int max(node* root){

if(root->right==NULL){
printf("%d is Maximum\n",root->data);
return 0;
}
max(root->right);

}

//main
void main(){
int n,m;

while(n!=-1){
printf("Provide the data : ");
scanf("%d",&n);
if(n!=-1)
root=binarySearch(root,n);
}
//root=createTree(root);
printf("Post-Order\n");
displayPost(root);
printf("Pre-Order\n");
displayPre(root);
printf("In-Order\n");
displayIn(root);
printf("Minimum Function : \n");
min(root);
printf("Maximum Function : \n");
max(root);

}
