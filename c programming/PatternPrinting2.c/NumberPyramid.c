#include<stdio.h>
int main(){
    printf("Enter a number : ");
    int n;
    int a=1;
    scanf("%d",&n);
    for (int i=1; i<=n; i++){
        for(int j=1; j<=i+n-1; j++){
            if(j<=n-i)printf(" ");
            else{
                printf("%d",a);
                a=a+1;
            }
        }
        printf("\n");
        a=1;
    }
    return 0;
}