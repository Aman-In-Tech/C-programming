#include<stdio.h>
int main(){
    char a;
    printf("Enter a character : ");
    scanf("%c",&a);
    if(a=='A' ||a=='E' ||a=='I' ||a=='O' ||a=='U' ||a=='a' ||a=='e' ||a=='i' ||a=='o' ||a=='u' ) printf("character entered id vowel");
    else printf("character is consonent");
}