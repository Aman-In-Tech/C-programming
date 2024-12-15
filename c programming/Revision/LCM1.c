#include<stdio.h>
int main(){
    int a,b,c,d;
    printf("Enter two numbers : ");
    scanf("%d %d",&a,&b);
    for(int i=a; i>=0; i--){
        c=b%i;
        d=a%i;
        if(c==0 && d==0){
            printf("GCD is %d",i);
            break;
        }
    }   
}