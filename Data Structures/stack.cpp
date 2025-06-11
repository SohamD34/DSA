#include <stdio.h>
#include <string.h>
#define INT_MAX 1000

int stack[INT_MAX];
int top = -1;

void push(int data){
    top++;
    stack[top] = data;
}

void pop(){
    if(top>=0){
        top--;
    }
    else{
        printf("stack is empty\n");
    }
}

int peek(){
    if(top>=0){
        return stack[top];
    }
    else{
        return -1;
    }
}

int size(){
    return top+1;
}

void print(){
    int i;
    for(i=0;i<=top;i++){
        printf("%d ",stack[i]);
    }
    printf("\n");
}

int isempty(){
    if(top==-1){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){

    int arr[5] = {1,2,3,4,5};
    for(int i=0;i<5;i++){
        push(arr[i]);
    }

    push(8);
    pop();

    print();

    return 0;
}



