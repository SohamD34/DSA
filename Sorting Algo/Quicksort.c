#include <stdio.h>

void swap(int * a, int * b){
    int t = *a;
    *a = *b;
    *b = t;
}

int partition(int * arr,int low,int high){

    int pivot = arr[high];
    int i = low-1;
    
    for(int j=low;j<high;j++)
    {
        if(arr[j]<=pivot){
            i++;
            swap(&arr[i],&arr[j]);
        }
    }

    swap(&arr[i+1],&arr[high]);

    return (i+1);
}

void quicksort(int *arr, int low, int high){

    if(low<high){
        int pi = partition(arr, low, high);
        quicksort(arr,low,pi-1);
        quicksort(arr,pi+1,high);
    }
}

int main(){

    int arr[6] = {1,5,3,0,8,9};

    quicksort(arr,0,5);

    for(int i=0;i<6;i++){
        printf("%d ",arr[i]);
    }

    return 0;
}