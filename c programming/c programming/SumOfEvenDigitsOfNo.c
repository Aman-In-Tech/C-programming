#include<stdio.h>
int main(){
    int x;
    printf("Enter a number :");
    scanf("%d",&x);
    int sum=0;
    int n;
    while (x>0){
       n=x%10;
      x=x/10;
      if(n%2==0){
        sum=sum+n;
      }
    }
    printf("Sum of even digits of number you input is :%d",sum);
    return 0;
}