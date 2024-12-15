#include<stdio.h>
int main(){
   printf("Enter number of rows : ");
   int n;
   int m;
   scanf("%d",&n);
   printf("Enter number of column : ");
   scanf("%d",&m);
   int r;
   for(int i=1; i<=n; i++){
    for(int j=65; j<=m+64; j++ ){
        printf("%c ",j);
    }
    printf("\n");
   }
    return 0;
}