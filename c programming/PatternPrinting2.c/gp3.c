#include<stdio.h>
int main(){
    printf("Enter a number : ");
    int n,r=2,product=1;
    scanf("%d",&n);
    int i=1;
    while (i<=n)
    {
        product=product*r;
        i++;
         printf("%d ",product);
    }
   
    
    return 0;
}