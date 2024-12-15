#include<stdio.h>
int main(){
    int a,b,c,d;
    printf("enter a dividend and divisor: ");
    scanf("%d %d",&a,&b);
    c=a/b;
    d=a%b;
    printf("qutient is %d, remainder is %d",c,d);
}