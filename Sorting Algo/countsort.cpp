#include <stdio.h>

int main(){
    
    int n;
    scanf("%d",&n);

    int arrA[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arrA[i]);
    }

    int arrB[25];
    for(int i=0;i<25;i++){
        arrB[i] = 0;
    }

    for(int i=0;i<n;i++){
        arrB[arrA[i]]++;
    }

    int indx = 0;

    for(int i=0;i<25;i++){
        for(int j=0;j<arrB[i];j++){
            arrA[indx] = i;
            indx++;
        }
    }

    for(int i=0;i<n;i++){
        printf("%d ",arrA[i]);
    }

    return 0;
}