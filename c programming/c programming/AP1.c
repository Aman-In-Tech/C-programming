#include<stdio.h>
int main(){
    printf("Enter a number :");
    int n;
    scanf("%d",&n);
    int a=1;
    for(int i=1; i<=n; i++){
    printf("%d\n",a);
    a=a+5;}
    return 0;
}