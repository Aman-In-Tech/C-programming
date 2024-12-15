#include<stdio.h>
int main(){
    printf("Enter a number :");
    int n;
    int a=1;
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        if (i%2!=0)
        {
          continue; 
        }
        
        printf("%d ",i);
    }
    return 0;
}