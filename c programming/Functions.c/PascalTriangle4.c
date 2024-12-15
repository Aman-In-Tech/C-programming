#include<stdio.h>
int main(){
    printf("Enter a number : ");
    int n;
    scanf("%d",&n);
    int n1=1,n2=1;
    int nsp=n-1,non=1;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=nsp; j++){
            printf(" ");
        }
        for (int j=1; j<=i; j++){
            printf("%d ",n2);
            n2=n1*(i-j)/j;
            n1=n2;
        }
        printf("\n");
        n1=1,n2=1;
        nsp=nsp-1;
    }
}