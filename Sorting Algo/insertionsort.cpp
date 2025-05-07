#include <iostream>
using namespace std;

void insertionsort(int arr[], int n) {
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

void print(int * array, int n){
    int i;
    for(i=0;i<n;i++){
        printf("%d ",array[i]);
    }
    printf("\n");
}

int main(){

    int n;
    printf("Number of elements in the array : ");
    scanf("%d",&n);

    printf("Array : ");
    // int arr[n]; 
    // for(int i=0;i<n;i++){
    //     scanf("%d",&arr[i]);
    // }

    // insertionsort(arr,n);
    // print(arr,n);

    return 0;
}