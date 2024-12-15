#include<stdio.h>
int main(){
    int x;
    printf("Enter a number :");
    scanf("%d",&x);
    int number=0;
    int n;
    while (x>0){
       n=x%10;
      x=x/10;
      number=number*10+n;
    }
    printf("the reverse of the number you input is :%d",number);
    return 0;
}