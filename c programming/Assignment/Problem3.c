#include<stdio.h>
#include<math.h>
int main(){
    int n,a=0,b=1,c,sum=0,d,rem=0;
        printf("Enter the number : ");
        scanf("%d",&n);
          c=n;
    while(n!=0){
        n=n/10;
        a=a+1;

    }
    n=c;
    for(int i=1; n!=0; i++){
         rem=n%10;
   b=pow(rem,a);
    
   n=n/10;
   sum=sum+b;
    }
        if(c==sum)      printf("It is an armstrong number"); 
        else printf("It is not an armstrong number");   
 
}