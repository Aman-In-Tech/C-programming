//WAP for prime or not
#include<stdio.h>
int main(){
    int n,a=0;
    printf("Enter the number : ");
    scanf("%d",&n);
    for(int i=2; i<n; i++){
        if(n%i==0){
            printf("The number is not prime");
            
            a=1;
            break;
        }
    }
    if(a==0) printf("The number is prime");
}