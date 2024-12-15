#include<stdio.h>
int fact(int n){
    int factorial=1;
    for(int i=2; i<=n; i++){
        factorial=factorial*i;
    }
    return factorial;
} 
int main(){
    int n,r;
    printf("Enter n: ");
    scanf("%d",&n);
    printf("Enter r : ");
    scanf("%d",&r);
    int nfact=fact(n);
    int rfact=fact(r);
    int nrfact=fact(n-r);
    int ncr=nfact/(rfact*nrfact);
    printf("%d",ncr);
    return 0;
}