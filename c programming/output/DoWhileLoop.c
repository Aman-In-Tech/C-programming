#include<stdio.h>
int main (){
    printf("Enter a number :");
    int n;
    scanf("%d",&n);
    int a=0;
    do
    {
        int i=1;
        a=a+1;
        n=n/10;
        i++;
    } while (n!=0);
    printf("the no of digits in given number is : %d",a);
    
}