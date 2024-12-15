#include<stdio.h>
int main(){
    printf("Enter a number :");
    int n;
    scanf("%d",&n);
    int i;
    int a,b=0;
    while(n!=0){
        a=n%10;
        n=n/10;
        if(a%2==0){
            b=b+a;
        }
    }
    printf("The sum even digits of given number is : %d",b);
    return 0;
}