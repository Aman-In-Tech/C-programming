#include<stdio.h>
int main(){
    int x;
    printf("Enter a number");
    scanf("%d ",&x);
    for(int i=2; i<x; i++){
        if(x%i==0){
            continue;
            printf("the number is not prime");
        }
        else {
            printf("the number is prime");
        }
    }
    return 0;
}