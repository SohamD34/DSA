#include <stdio.h>
#define INT_MAX 1000

int queue[INT_MAX];
int front = 0;
int rear = -1;
int arr[INT_MAX];

int size(){
    return rear - front + 1;
}

void enqueue(int data){
    rear++;
    queue[rear] = data;
}

int dequeue(){
    int i;

    for(i=front;i<rear-1;i++){
        arr[i] = queue[i];
    }
    if(front==rear+1){
        printf("queue is empty\n");
    }
    else{
        int temp = queue[rear];
        rear--;
        return temp;
    }
}

int top(){
    if(rear==-1){
        return -1;
    }
    else{
        return queue[rear];
    }
}

int isempty(){
    if(front-rear==1){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){
            
    int i = 0;
    int n = 7; // number of nodes
    int visited[7] = {0,0,0,0,0,0,0};

    // adjacency matrix
    int a[7][7] = {
         {0,1,1,1,0,0,0},
         {1,0,1,0,0,0,0},
         {1,1,0,1,1,0,0},
         {1,0,1,0,1,0,0},
         {0,0,1,1,0,1,1},
         {0,0,0,0,1,0,0},
         {0,0,0,0,1,0,0}};

    visited[i] = 1;
    printf("%d ",i);
    enqueue(i);                     // enqueue i for exploration

    while(isempty()==0){
        int node = dequeue();
        
        for(int j=0;j<n;j++){
            if(a[node][j]==1 && visited[j]==0){ 
                printf("%d ",j);
                visited[j] = 1;     // mark as visited
                enqueue(j);         // enqueue for exploration
            }
        }
    }



    return 0;
}