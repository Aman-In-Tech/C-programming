#include<stdio.h>
int main(){
    printf("Enter cp :");
    float cp,sp,loss,profit;
    scanf("%f",&cp);
    printf(" Enter sp :");
    scanf("%f",&sp);
    if(sp>cp){
        profit=sp-cp;
        printf(" profit is equal to : %f",profit);
    }
    else{
        loss=cp-sp;
        printf(" loss is equal to : %f",loss);
    }
    return 0;
}