#include<stdio.h>
int minimum(int a, int b){
    int min;
    if(a>b) min=b;
    else{ min = a;}
    return min;
}
int main(){
    printf("Enter two numbers a and b :");
    int a,b,c;
    scanf("%d %d",&a,&b);
    c= minimum(a,b);
    printf("%d",c);
    return 0;
}