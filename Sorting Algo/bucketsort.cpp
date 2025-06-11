#include <stdio.h>
#define INT_MIN -10

int max_element(int array[], int size) {  

    int max = INT_MIN;  
    for(int i=0; i<size; i++){
        if(array[i] > max){ 
            max = array[i];
        } 
    }
    return max;  
}
  
void Bucket_Sort(int array[], int size){  

    int max = max_element(array, size);
    // array ka maximum element find kiya.

    int bucket[max+1];  
    // max elem ke size ki array bana li.
 
    for(int i=0; i<=max; i++){
        bucket[i] = 0;  
    }
    // initialise all to 0;

    for(int i=0; i<size; i++){
        bucket[array[i]]++;
    }
    // corresponding index wale place pe frequency badhao

    int j=0;

    for(int i=0; i<=max; i++){ 
        while(bucket[i] != 0){          
            array[j++] = i;  
            bucket[i]--;   
        }  
    }
    // iterate karke array me value update karo
}  

int main(){

    int array[100], i, num; 
    scanf("%d",&num);

    for(i=0; i<num; i++){
        scanf("%d", &array[i]); 
    }
 
    Bucket_Sort(array,num); 

    for(i=0;i<num;i++){
        printf("%d ", array[i]);
    }
    printf("\n"); 

    return 0;
}