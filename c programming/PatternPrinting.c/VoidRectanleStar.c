#include<stdio.h>
int main (){
    printf("Enter bredth of rectangle : ");
    int n;
    scanf("%d",&n);
    printf("Enter length of rectangle : ");
    int m;
    scanf("%d",&n);
    for (int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            if(i==1 || i==n || j==1 || j==m){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}