#include<stdio.h>
int sum(int a, int b){
    return a+b;
}
int sub(int a, int b){
    return a-b;
}
int multi(int a, int b){
    return a*b;
}
int div(int a, int b){
    return a/b;
}
int main(){
    int a,b,c,d,e;
      printf("enter 1 to add\nenter 2 to subtract\nenter 3 to multiply\nenter 4 to divide\n");
    printf("Enter two no");
    scanf("%d %d",&a,&b);
    scanf("%d",&c);
    if(c==1){ d=sum(a,b);}
    else if(c==2){ d=sub(a,b);}
    else if(c==3){ d=multi(a,b);}
    else if(c==4){ d=div(a,b);}
    printf("%d",d);
    printf("\n enter 1 to exit\n enter 2 to continue");
    scanf("%d",&e);
    if (e==2){ main();}
}