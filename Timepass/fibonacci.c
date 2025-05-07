#include <stdio.h>
#include <string.h>

int fibo(int n){

    if(n==1){
        return 0;
    }
    else if(n==2){
        return 1;
    }
    else{
        return (fibo(n-1)+fibo(n-2));
    }
    return 0;
}

int main(){

    printf("FIBONACCI SEQUENCE CALCULATOR\n");

    int n;

    Enter:
        printf("\n");
        
    printf("\nEnter the number of element of fibonacci series\n");
    scanf("%d",&n);
    
    printf("%d\n",fibo(n));

    int ans;
    printf("\n Do you want to continue ?\n1.Yes 2.No\n");
    scanf("%d",&ans);

    if(ans==1){
        goto Enter;
    }
    else{
        printf("\nPROGRAM ENDED\n");
    }
    return 0;
}

// 0 1 1 2 3 5 8
// 1 2 3 4 5 6 7