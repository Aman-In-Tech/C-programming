#include<stdio.h>
int main(){
    int x;
    printf("Enter a number :");
    scanf("%d",&x);
    int n=0;
    while (x>0){
        x=x/10;
        n++;
        
    }
    printf("%d",n);
    return 0;
}