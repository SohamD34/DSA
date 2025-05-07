#include <stdio.h>
#define INT_MAX 1000
// MAX HEAP

int heap[INT_MAX];
int size = 0;

void swap(int *a, int *b){
    int temp = *b;
    *b = *a;
    *a = temp;
}

void heapify(int array[],int size,int i){

    if(size==1){
        printf("Single element in the heap");
    }
    else{
        int largest = i;
        int l = 2*i + 1;
        int r = 2*i + 2;
        if(l<size && array[l]>array[largest]){
            largest = l;
        }
        if(r<size && array[r]>array[largest]){
            largest = r;
        }
        if(largest!=i){
            swap(&array[i],&array[largest]);
            heapify(array,size,largest);
        }
    }
}

void insert(int array[],int newNum){

    if(size==0){
        array[0] = newNum;
        size+=1;
    }
    else{
        array[size] = newNum;
        size+=1;
        for(int i=size/2-1; i>=0; i--){
            heapify(array,size,i);
        }
    }
}

void KthLargest(int array[]){
}

void printheap(){
    for(int i=0; i<size; i++){
        printf("%d ",heap[i]);
    }
    printf("\n");
}

int main(){

    int n;
    scanf("%d",&n);

    for(int i=0; i<n; i++){
        int num;
        scanf("%d",&num);
        insert(heap,num);
    }

    for(int i=n/2; i>=1; i--){
        heapify(heap,10,i);
    }

    printf("Build heap : ");
    printheap();

    // getting 3 max values stored in the heap
    
    int max;
    for(int i=0;i<3;i++){
        max = heap[0];
        printf("%d\n",max);

        swap(&heap[size-1],&heap[0]);
        size--;
        heapify(heap,size,0);
        printf("Heap = ");
        printheap();
    }

    return 0;
}