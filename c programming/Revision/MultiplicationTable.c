#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter a number : ");
    scanf("%d",&a);
    for(int i=1; i<=10; i++){
        b=a*i;
        printf("%d X %d = %d\n",a,i,b);
    }
}