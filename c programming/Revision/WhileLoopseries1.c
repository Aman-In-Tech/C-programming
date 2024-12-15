#include<stdio.h>
void main(){
    int a=1,i=1,j=1,b,n;
    printf("Enter n : ");
    scanf("%d",&n);
    while(i<=n){
        j=1;
        a=1;
        while(j<=i){
            a=a*i;
            j++;
        }
        printf("%d  ",a);
        i=i+1;
    }
}