#include<stdio.h>
int main(){
    int a,b,c,d,e;
    printf("Enter three numbers: ");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b && a>c) printf("%d is the largest",a);
    else if(b>a && b>c) printf("%d is the largest",b);
    else if(c>a && c>b) printf("%d is the largest",c);
    else printf("%d = %d = %d",a,b,c);
}