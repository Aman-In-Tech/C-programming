#include<stdio.h>
int main(){
    printf("Enter two numbers , the number to be raised first ");
    int a,b;
    scanf("%d %d",&a,&b);
    int n=1;
   for(int i=1; i<=b; i++){
        n=n*a;
   }
   printf("a raised to the power b is : %d",n);
    return 0;
}