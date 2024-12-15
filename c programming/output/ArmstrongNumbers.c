#include<stdio.h>
int main(){
    for(int i=1; i<=9; i++){
        if(i==i)
        printf("%d  ",i);
    }
    for(int i=10; i<=99; i++){
        int a,b,c;
        a=i%10;
        b=i/10;
        c=b%10;
        if(i==a*a+b*b)
        printf("%d  ",i);
    }
    for(int i=100; i<=500; i++){
        int a,b,c,d;
        a=i%10;
        b=i/10;
        c=b%10;
        d=b/10;
        if(i==a*a*a+c*c*c+d*d*d)
        printf("%d  ",i);
    }
    return 0;
}