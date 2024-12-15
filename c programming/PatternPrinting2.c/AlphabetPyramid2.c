#include<stdio.h>
int main(){
    printf("Enter the number of lines : ");
    int n;
    int a=64;
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i; j++) printf(" ");
        for(int j=1; j<=i; j++){
             a=a+1;
            printf("%c",a);
        }
        for(int j=1; j<=i-1; j++){
            a=a-1;
            printf("%c",a);
        }
          printf("\n");
          a=64;
    }
    return 0;
}