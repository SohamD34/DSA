#include <iostream>
using namespace std;

void selectionsort(int arr[], int n){
    
}


void print(int array[], int n){
    int i;
    for(i=0;i<n;i++){
        printf("%d ",array[i]);
    }
    printf("\n");
}


int main(){

    int n = 5;
    int arr[] = {3,1,4,5,2};

    selectionsort(arr, n);
    print(arr, n);
}