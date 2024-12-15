#include<stdio.h>
int main (){
    printf("Enter a number :");
    int n;
    scanf("%d",&n);
    int c=n;
    int a=0,b=0;
    do{
        a=n%10;
        n=n/10;
        b=b*10+a;
    }
    while(n!=0);
   int d;
   d=c+b;
   printf("%d",d);
    return 0;
}