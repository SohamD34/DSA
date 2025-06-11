#include <stdio.h>

/*
1st code - kms to miles - 1km = 0.621371 miles
2nd code - inches to feet - 1 inch = 0.0833 feet
3rd code - cms to inches - 1 cm = 0.393701 inch
4th code - pound to kgs - 1 pound = 0.453592 kg
5th code - inches to meters - 1 inch = 0.0254 m
*/

void code1(float x){
    printf("%f\n",x*0.621371);
}

void code2(float x){
    printf("%f\n",x*0.0833);
}

void code3(float x){
    printf("%f\n",x*0.393701);
}

void code4(float x){
    printf("%f\n",x*0.453592);
}

void code5(float x){
    printf("%f\n",x*0.0254);
}

int main(){
    int n;
    
    hello:
        printf("\n");

    printf("1 - kms to miles\n");
    printf("2 - inches to feet\n");
    printf("3 - cms to inches\n");
    printf("4 - pound to kgs\n");
    printf("5 - inches to meters\n");

    printf("Enter the correct corresponding number to perform a calculation.\n");
    scanf("%d",&n);

    float a;
    printf("\nEnter the value : ");
    scanf("%f",&a);

    if(n==1){
        code1(a);
    }
    if(n==2){
        code2(a);
    }
    if(n==3){
        code3(a);
    }
    if(n==4){
        code4(a);
    }
    if(n==5){
        code5(a);
    }
    
    int r;
    printf("\nDo you want to continue ?\n1. Yes\n2.No\n");
    scanf("%d",&r);

    if(r==1){
        goto hello;
    }
    else{
        printf("\nPROGRAM ENDED\n\n");
    }
    return 0;
}