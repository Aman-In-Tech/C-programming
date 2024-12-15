#include<stdio.h>
int main(){
    printf("Enter a number : ");
    int n;
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        for(int i=1; i<=n; i++){
            printf("%d ",i);
        }
        printf("\n");
    }
    return 0;
}