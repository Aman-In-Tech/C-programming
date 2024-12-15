// Fx=1/1! +2/2! +3/3! +4/4!....................
#include<stdio.h>
#include<conio.h>
int fact(int n){
    if(n==0) return 1;
    else  return n*fact(n-1);
}
void main(){
 int n;
 float sum=0;
  printf("Enter the value of n:");
  scanf("%d",&n);
 for(float i=1; i<=n; i++){
     sum=sum + i/fact(i);
 }
  printf("sum is %f",sum);
  getch();
}