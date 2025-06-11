#include <stdio.h>
#include <string.h>

void bubblesort(int * arr, int n){
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){

            if(arr[i]<arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
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
    
    printf("\nArray : ");
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    bubblesort(arr,n);
    print(arr,n);
    
    return 0;
}

/*Number of elements in the array : 5
1 3 8 7 6
1 3 6 7 8
*/