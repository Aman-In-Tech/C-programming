#include<stdio.h>
int main(){
    printf(" Enter a number : ");
    int x;
    scanf(" %d ",&x);
    if(x%5==0 && x%3==0){
        printf(" %d is divisible by 5 and 3",x);

    }
    else {
        printf(" %d is not divisible by either 5 or 3",x);
    }
    return 0;
}