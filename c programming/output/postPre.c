#include<stdio.h>
int main(){
    int n=10;
    int j=n++;
    printf("%d\n",j);
    printf("%d\n ",n);
    int k=--n;
    printf("%d\n",k);
    return 0;
}