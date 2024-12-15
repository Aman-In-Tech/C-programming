#include<stdio.h>
int main(){
    printf("Enter a number :");
    int x;
    scanf("%d",&x);
   // printf("your number is %d",x);
   if(x%2==0)
   printf("%d is even number");
   else if (x%2==1)
   {
    printf("%d is odd number",x);
    
   }
    return 0;
}