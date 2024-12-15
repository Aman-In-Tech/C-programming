#include<stdio.h>
#include<math.h>
int main(){
    int n,a=0,b=1,c,sum=0,d,rem=0;
    for(int i=5; i<=5000; i++){
        sum=0,rem=0,b=1,a=0;
        n=i;
          c=n;
    while(n!=0){
        n=n/10;
        a=a+1;

    }
    n=c;
    b=1;
    for(int i=1; n!=0; i++){
         rem=n%10;
   b=pow(rem,a);
    
   n=n/10;
   sum=sum+b;
   b=1;
    }
        if(c==sum)      printf("\n%d",sum);
    }
 
}