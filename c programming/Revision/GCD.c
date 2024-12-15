#include<stdio.h>
int main(){
    int a,b,c,d;
    printf("Enter two number : ");
    scanf("%d %d",&a,&b);
    for(int i=a; i>=a; i++){
        c=i%a;
        d=i%b;
        if(c==0 && d==0){
            printf("%d is the GCD",i);
            break;
        }
    }
}