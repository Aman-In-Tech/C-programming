#include<stdio.h>
int main(){
    printf("Enter a number : ");
    int n;
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        for(int j=1; j<=2*i-1; j=j+2){
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}