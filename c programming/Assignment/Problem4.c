//Palindrome or not
#include<stdio.h>
int main(){
    int n,rev=0,a,rem;
    printf("Enter the number : ");
    scanf("%d",&n);
    a=n;
    while(n!=0){
     rem=n%10;
     n=n/10;
     rev=rev*10+rem;
    }
    if(rev==a) printf("The number is Palindrome");
    else printf("The number is not Palindrome");
    return 0;
}