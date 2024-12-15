#include<stdio.h>
int main(){
    printf("Enter a number :");
    int n;
    scanf("%d",&n);
    int i=1;
    int a=1;
    while(i<=n){
        a=a*i;
        i++;
        printf("The factorial of number is : %d \n",a);
    }
    
    return 0;
}