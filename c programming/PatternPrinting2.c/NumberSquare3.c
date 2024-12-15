#include<stdio.h>
int main (){
    printf("Enter a number : ");
    int n;
    scanf("%d",&n);
    int m=n,p;
    int a,b,min,max;
    for(int i=1; i<=2*n-1; i++){
        for(int j=1; j<=2*n-1; j++){
       a=i;
       if(a>n) a=2*n-i;
       b=j;
       if(b>n) b=2*n-j;
        if(a>b) min=b;
        else { min= a;}
        max=n-min+1;
        printf("%d",max);
        }
        printf("\n");
    }
    return 0;
}