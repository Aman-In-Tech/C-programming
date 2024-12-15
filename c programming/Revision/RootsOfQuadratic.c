#include<stdio.h>
int main(){
    float a,b,c,D,e,f,g,h;
    printf("Coeffecients of X2, x , constant : ");
    scanf("%f %f %f",&a,&b,&c);
    D=(b*b-4*a*c)/(2*a);
    e=-b/(2*a);
    f=e+D;
    g=e-D;
    printf("Roots are %f and %f ",f,g);
}