#include<stdio.h>
int main(){
    printf("Enter a number : ");
    int n;
    scanf("%d",&n);
    int a=65;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(j<=n-i) printf(" ");
            else{printf("%c",a);
             a=a+1;
            }
            
        }
        printf("\n");
        a=65;
    }
    return 0;
}