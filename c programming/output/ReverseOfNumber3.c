#include<stdio.h>
int main (){
    printf("Enter a number :");
    int n;
    scanf("%d",&n);
    int a=0,b=0;
    do{
        a=n%10;
        n=n/10;
        b=b*10+a;
    }
    while(n!=0);
    printf("the reverse of the given number is : %d",b);
    return 0;
}