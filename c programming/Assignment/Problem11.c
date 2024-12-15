#include<stdio.h>
#include<conio.h>
void main(){
    int n,m;
    printf("Enter the number of rows : ");
    scanf("%d",&n);
    m=n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            printf("* ");
        }
        m=m-1;
        printf("\n");
    }
    getch();
}