#include<stdio.h>
int main (){
    printf("Enter a number : ");
    int n;
    scanf("%d",&n);
    for(int i=1; i<=n; i++) printf("%d",i);
    for(int i=n-1;i>=1;i--) printf("%d",i);
    printf("\n");
    int nsp=1,nst=n-1,m=0;
    for(int i=1; i<=n-1; i++){
        for(int j=1; j<=nst; j++){
             m=m+1;
            printf("%d",m);
        }
        for(int j=1; j<=nsp; j++) printf(" ");
        for(int j=1; j<=nst; j++){
            printf("%d",m);
             m=m-1;
        }
        nsp+=2;
        nst--;
        printf("\n");
    }
    return 0;
}