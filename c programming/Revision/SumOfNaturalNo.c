#include<stdio.h>
int main(){
    int a,b=0,c,d,e;
    printf("Enter n");
    scanf("%d",&a);
    for(int i=1; i<=a; i++){
    b=b+i;
    }
    printf("sum of first %d natural no is %d",a,b);
}