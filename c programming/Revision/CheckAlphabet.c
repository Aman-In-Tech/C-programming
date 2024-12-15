//65 90 97 122
#include<stdio.h>
int main(){
    char a,b;
    int c,d;
    printf("Enter a char datatype :");
    scanf("%c",&a);
    c=a;
    if(c>=65 && c<=90 || c>=97 && c<=122) printf("entered char is character :");
    else printf ("entered char is not charcter");
}