#include<stdio.h>
int main(){
    printf("Enter a number :");
    int n;
    scanf("%d",&n);
    int a=0;
    for(int i=1; n!=0; i++){
        n=n/10;
        a=a+1;
    }
        if(a!=0){
            printf("Number of Digits in given number is : %d",a);
        }
        else{
            printf("Number of Digits in given number is 1");
        }
    return 0;
}