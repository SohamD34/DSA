// C program to demonstrate insert
// operation in binary
// search tree.
#include <stdio.h>
#include <stdlib.h>

struct node {
	int key;
	struct node *left, *right;
};

struct node* newNode(int item){
	
    struct node* temp = (struct node*)malloc(sizeof(struct node));
	temp->key = item;
	temp->left = temp->right = NULL;
	return temp;
}

void inorder(struct node* root){
	
    if (root != NULL) {
		inorder(root->left);
		printf("%d ", root->key);
		inorder(root->right);
	}
}

void preorder(struct node* root){

    if(root!=NULL){
        printf("%d ",root->key);
        preorder(root->left);
        preorder(root->right);
    }
}

void postorder(struct node* root){

    if(root!=NULL){
        postorder(root->left);
        postorder(root->right);
        printf("%d ",root->key);
    }
}

struct node* insert(struct node* node, int key){

	if (node == NULL)
		return newNode(key);

	if (key <= node->key)
		node->left = insert(node->left, key);

	else if (key > node->key)
		node->right = insert(node->right, key);

	return node;
}

int main(){

	struct node* root = NULL;

    int n;
    scanf("%d",&n);

    int arr[n];
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
	root = insert(root, arr[0]);
	
    for(int i=1;i<n;i++){
        insert(root,arr[i]);
    }

    printf("\nPreorder = ");
	preorder(root);
    printf("\nInorder = ");
    inorder(root);
    printf("\nPostorder = ");
    postorder(root);

	return 0;
}