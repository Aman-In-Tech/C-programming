//C Program to Count Number of Digits in an Integer
#include<stdio.h>
int main(){
    int a,b=0,c,d;
    printf("Enter a number : ");
    scanf("%d",&a);
    c=a;
    for(int i=1; a>0; i++){
        a=a/10;
        b=b+1;
    }
    printf("the no of digits in %d is %d",d,b);
}