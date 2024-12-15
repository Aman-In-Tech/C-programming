#include<stdio.h>
int main(){
    int x;
    printf(" Enter a number :");
    scanf("%d",&x);
     int factorial=1;
    for(int i=1; i<=x; i++ ){
       
        factorial=factorial*i;
    }
    printf("the factorial of given no is :%d",factorial);
    return 0;
}
