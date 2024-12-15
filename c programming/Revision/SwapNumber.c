#include<stdio.h>
int main(){
    int a,b;
    printf("enter two number :");
    scanf("%d %d",&a,&b);
    a=a+b;
    b=b-a;
    a=(a+b)/2;
    b=(a-b)/2;
    printf("%d %d",a,b);
}