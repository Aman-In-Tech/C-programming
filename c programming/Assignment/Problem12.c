#include<stdio.h>
#include<conio.h>
void main(){
    int n,m;
    char a='A';
    printf("Enter the number of rows : ");
    scanf("%d",&n);
    m=a;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            printf("%c ",m);
            m=m+1;
        }
        m=a;
        printf("\n");
    }
    getch();
}