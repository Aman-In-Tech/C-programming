#include<stdio.h>
int main(){
    printf("Enter number of rows : ");
    int n,m;
    scanf("%d",&n);
    printf("Enter number of column : ");
    scanf("%d",&m);
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}