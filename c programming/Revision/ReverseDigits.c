#include<stdio.h>
int main(){
    printf("enter a number: ");
    int a,b,c=0;
    scanf("%d",&a);
    for(int i=1; a>0; i++){
        b=a%10;
        c=c*10+b;
        a=a/10;
    }
    printf("%d",c);
}