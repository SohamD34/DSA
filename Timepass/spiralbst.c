#include <stdio.h>
#include <stdlib.h>
#define INT_MAX 1000

struct node {
	int data;
	struct node *left, *right;
};

struct node* newNode(int item){
	
    struct node* temp = (struct node*)malloc(sizeof(struct node));
	temp->data = item;
	temp->left = temp->right = NULL;
	return temp;
}

struct node* insert(struct node* node, int data){

	if (node == NULL)
		return newNode(data);

	if (data <= node->data)
		node->left = insert(node->left, data);

	else if (data > node->data)
		node->right = insert(node->right, data);

	return node;
}

struct node* stack1[INT_MAX];
struct node* stack2[INT_MAX];
int top1 = -1;
int top2 = -1;

void push1(struct node* data){
    top1++;
    stack1[top1] = data;
}

void pop1(){
    if(top1>=0){
        top1--;
    }
    else{
        printf("stack is empty\n");
    }
}

int peek1(){
    if(top1>=0){
        return stack1[top1]->data;
    }
    else{
        return -1;
    }
}

int size1(){
    return top1+1;
}

int isempty1(){
    if(top1==-1){
        return 1;
    }
    else{
        return 0;
    }
}

void push2(struct node* data){
    top2++;
    stack2[top2] = data;
}

void pop2(){
    if(top2>=0){
        top2--;
    }
    else{
        printf("stack is empty\n");
    }
}

int peek2(){
    if(top2>=0){
        return stack2[top2]->data;
    }
    else{
        return -1;
    }
}

int size2(){
    return top2+1;
}

int isempty2(){
    if(top2==-1){
        return 1;
    }
    else{
        return 0;
    }
}


int printSpiral(struct node* root, int index){

    int second = 0;
    int ans = 0;

    if (root == NULL){
        return 0; // NULL check
    }

    push1(root);
 
    while (!isempty1() || !isempty2()) {
        
        while (!isempty1()) {
            struct node* temp = stack1[top1];
            printf("%d ",stack1[top1]->data);
            
            if(second==1){
                ans = stack1[top1]->data;
                second = 0;
            }

            if(stack1[top1]->data == index){
                second = 1;
            }
            pop1();
           
            if (temp->right){
                push2(temp->right);
            }
            if (temp->left){
                push2(temp->left);
            }
                
        }

        while (!isempty2()) {
            struct node* temp = stack2[top2];
            printf("%d ",stack2[top2]->data);

            if(second==1){
                ans = stack2[top2]->data;
                second = 0;
            }

            if(stack2[top2]->data == index){
                second = 1;
            }
            pop2();

            if (temp->left){
                push1(temp->left);
            }
            if (temp->right){
                push1(temp->right);
            }
        }
    }
    printf("\n");
    return ans;
}

int main(){

    struct node* root = NULL;

    int n;
    scanf("%d",&n);

    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
	root = insert(root, arr[0]);
	
    for(int i=1;i<n;i++){
        insert(root,arr[i]);
    }
    
    int m;
    scanf("%d",&m);

    int x = printSpiral(root,m);
    printf("%d\n",&x);


    return 0;
}