#include<stdio.h>
int main(){
    printf("Enter a number :");
    int n;
    scanf("%d",&n);
    (n%2==0)?
    printf("%d is an even number :",n):
    printf(" %d is an odd number :",n);
    return 0;
}