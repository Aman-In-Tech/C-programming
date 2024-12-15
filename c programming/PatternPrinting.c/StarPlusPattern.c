#include<stdio.h>
int main(){
    printf("Enter an odd number :");
    int n;
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(j==(n+1)/2 || i==(n+1)/2){
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