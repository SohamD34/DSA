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

    if(size!=1){
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

void printheap(){
    for(int i=0; i<size; i++){
        printf("%d ",heap[i]);
    }
    printf("\n");
}

void heapSort(int arr[], int N){
 
    // Build max heap
    for(int i = N / 2 - 1; i >= 0; i--){
        heapify(arr, N, i);
    }
 
    // Heap sort
    for(int i = N - 1; i >= 0; i--){
        swap(&arr[0], &arr[i]); 
        // Heapify root element to get highest element at root again
        heapify(arr, i, 0);
    }
}

int main(){

    int n;
    scanf("%d",&n);

    for(int i=0; i<n; i++){
        int num;
        scanf("%d",&num);
        insert(heap,num);
    }

    heapSort(heap,n);

    printf("Build heap : ");
    printheap();

    return 0;
}