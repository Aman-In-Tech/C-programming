#include<stdio.h>
int main(){
    printf("Enter a number :");
    int n;
    scanf("%d",&n);
    int a=0;
    int b=0;
    for(int i; n!=0; i++){
        b=n%10;
        a=a*10+b;
        n=n/10;
    }
    printf("the reverse of the number is:%d",a);
    return 0;
}