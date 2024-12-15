#include<stdio.h>
int combination(int n, int r){
     int nfact=1;
    for(int i=2; i<=n; i++){
        nfact=nfact*i;
    } 
     int rfact=1;
    for(int i=2; i<=r; i++){
        rfact=rfact*i;
    } 
     int nrfact=1;
    for(int i=2; i<=n-r; i++){
        nrfact=nrfact*i;
    } 
    int ncr=nfact/(rfact*nrfact);
    return ncr;
}
int main(){
printf("Enter a number : ");
int n;
int a,b,c;
scanf("%d",&n);
for(int i=1; i<=n; i++){
   for(int j=1; j<=i; j++){
    a=i-1;
    b=j-1;
    c=combination(a,b);
    printf("%d ",c);
   }
   printf("\n");
}
return 0;
}