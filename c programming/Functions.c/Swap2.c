#include<stdio.h>
 int main(){
    int a,b;
    printf("Enter a : ");
    scanf("%d",&a);
    printf("Enter b : ");
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("the number a=%d\n",a);
    printf("The number b=%d",b);
    return 0;
 }