#include<stdio.h>
 int main(){
    int a,b;
    printf("Enter a : ");
    scanf("%d",&a);
    printf("Enter b : ");
    scanf("%d",&b);
    int temp=a;
    a=b;
    b=temp;
    printf("the number a=%d\n",a);
    printf("The number b=%d",b);
    return 0;
 }