#include<stdio.h>
int main(){
    printf("Enter a number : ");
    int n;
    int a=0;
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        for (int j=1; j<=n+i-1; j++){
            if(j<=n-i)printf(" ");
            else if(j>n-i && j<=n ){
                a=a+1;
                printf("%d",a);
            }
            else if(j>n){
                 a=a-1;
                printf("%d",a);
               
            }

        }
        a=0;
        printf("\n");
    }
    return 0;
}