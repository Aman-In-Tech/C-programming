#include<stdio.h>
int main(){
    printf("Enter a number :");
    int n;
    scanf("%d",&n);
    if(n%2==0){
        printf("The sum of series is :%d",-n/2);
    }
    else{
        printf("The sum of series is : %d",(n+1)/2);
    }
    return 0;
}