#include<stdio.h>
int main(){
    printf("Enter a number : ");
    int n;
    scanf("%d",&n);
    int m;
     m=n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            printf("%d ",j);
        }
        m=m-1;
        printf("\n");
    }
    return 0;
}