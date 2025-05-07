#include <iostream>
using namespace std;

struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};
 
int search(int arr[], int strt, int end, int value){
    int i;
    for (i = strt; i <= end; i++) {
        if (arr[i] == value)
            return i;
    }
}

struct Node* newNode(int data){
    struct Node* Node = (struct Node*)malloc(sizeof(struct Node));
    Node->data = data;
    Node->left = NULL;
    Node->right = NULL;
 
    return (Node);
}

struct Node* buildTree(int in[], int pre[], int inStrt, int inEnd){
    static int preIndex = 0;
 
    if (inStrt > inEnd)
        return NULL;
 
    struct Node* tNode = newNode(pre[preIndex++]);
 
    if (inStrt == inEnd)
        return tNode;
 
    int inIndex = search(in, inStrt, inEnd, tNode->data);
 
    tNode->left = buildTree(in, pre, inStrt, inIndex - 1);
    tNode->right = buildTree(in, pre, inIndex + 1, inEnd);
 
    return tNode;
}

void printInorder(struct Node* Node){

    if (Node == NULL)
        return;
 
    printInorder(Node->left);
    printf("%d ", Node->data);
    printInorder(Node->right);
}

int main(){

    int n;
    scanf("%d",&n);

    int inord[n], preord[n];
    for(int i=0;i<n;i++){
        scanf("%d",&preord[i]);
    }
    for(int i=0;i<n;i++){
        scanf("%d",&inord[i]);
    }

    struct Node * root = buildTree(inord, preord,0,n-1);
    
    

    return 0;
}