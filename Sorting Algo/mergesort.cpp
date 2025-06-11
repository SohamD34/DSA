#include <stdio.h>

void merge(int * arr, int start, int mid, int end){
    
    int n1 = mid - start + 1;
    int n2 = end - mid;

    int arr1[n1],arr2[n2];

    for(int i=0;i<n1;i++){
        arr1[i] = arr[start+i];
    }
    for(int j=0;j<n2;j++){
        arr2[j] = arr[mid+j+1];
    }
    int i = 0;
    int j = 0;
    int k = start;
    while (i < n1 && j < n2){
        if (arr1[i] <= arr2[j]){
            arr[k] = arr1[i];
            i++;
        }
        else{
            arr[k] = arr2[j];
            j++;
        }
        k++;
    }
    // Copy the remaining elements of L[]
    while (i < n1){
        arr[k] = arr1[i];
        i++;
        k++;
    }
    // Copy the remaining elements of R[]
    while (j < n2){
        arr[k] = arr2[j];
        j++;
        k++;
    }
}

void mergeSort(int * arr,int start, int end){
    
    if(start<end){
        int mid = (start+end)/2;
        mergeSort(arr,start,mid);
        mergeSort(arr,mid+1,end);
        merge(arr,start,mid,end);
    }
}

int main(){


 
    return 0;
}