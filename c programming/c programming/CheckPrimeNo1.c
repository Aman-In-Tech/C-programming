#include<stdio.h>
int main(){
    int x;
    printf("enter a number :");
    scanf("%d",&x);
    for(int i=2; i<x; i++){
         if(x%i==0){
            printf("the no is composite");
            break;
         }
         else{
            printf("the no is prime");
            break;
         }
        
        
    }
    return 0;
}