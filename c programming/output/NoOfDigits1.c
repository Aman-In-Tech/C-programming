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
    if(a==0)printf("the no of digits is : 1");
    else{
        printf(" The no of digits is: %d",a);
    }
    return 0;
}