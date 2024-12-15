#include<stdio.h>
int main(){
    printf("Enter a number : ");
    int n;
    scanf("%d",&n);
    for(int i=1; i<=2*n-1; i++) printf("%d",i);
    printf("\n");
    int nsp=1,nst=n-1,m=1;
    for(int i=1; i<n; i++){
        for(int j=1; j<=nst; j++){
            printf("%d",m);
            m=m+1;
        }
        for(int j=1; j<=nsp; j++){
            printf(" ");
            m=m+1;
        }
          for(int j=1; j<=nst; j++){
            printf("%d",m);
            m=m+1;
        }
        nsp+=2;
        nst--;
        m=1;
        printf("\n");
    }
    return 0;
}