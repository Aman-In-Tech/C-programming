#include<stdio.h>
int factorial(int n){
     int fact;
     fact =1;
    for(int i=2; i<=n; i++){
    fact=fact*i;}
    return fact;
}
int main(){
    int n,r,nfact,nrfact;
    printf("Enter n and r : ");
    scanf("%d %d",&n,&r);
    nfact=factorial(n);
    nrfact=factorial(n-r);
    int npr=nfact/nrfact;
    printf("%d",npr);
    return 0;
}