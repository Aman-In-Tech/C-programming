#include<stdio.h>
int factorial(int n){
    int fact;
    fact=1;
for(int i=1; i<=n; i++){
fact= fact*i;  }
return fact; 
}
int combination(int n, int r) {
    int comb;
    int nfact=factorial(n);
    int rfact=factorial(r);
    int nrfact=factorial(n-r);
    comb=nfact/(rfact*nrfact);
    return comb;
}
int main(){
    printf("Enter a number : ");
    int n,a;
    scanf("%d",&n);
    for(int i=0; i<=n-1; i++){
        for(int j=0; j<=i; j++){
            a=combination(i,j);
            printf("%d",a);
        }
        printf("\n");
    }
    return 0;
} 