#include<stdio.h>
int main(){
    int a=0,b=1,c,d;
    printf("Enter a number : ");
    scanf("%d",&c);
    for(int i=1; i<=c; i++){
        d=a+b;
        printf("%d  ",a);
        a=b;
        b=d;
    }
}