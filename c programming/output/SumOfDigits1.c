#include<stdio.h>
int main(){
    printf("Enter a number :");
    int n;
    scanf("%d",&n);
    int a=0;
    for (int i = 1; n!= 0; i++)
    {
        int b;
        b=n%10;
        n=n/10;
        a=a+b;
    }
    printf("sum of digits is :%d",a);
    return 0;
}