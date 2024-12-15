//The Tic-Tac-Toe game is very popular. It’s fun when you play with paper and pencil. Develop a mini project in C Tic Tac Toe game – a simple console 
//application without graphics.It is the same noughts and crosses or the Xs and Os, the other names for Tic-Tac-Toe, you’ve played with paper and pencil. 
//This mini game project is written in C language in a very simple manner; it is complete and totally error-free.
#include<stdio.h>
int main(){
    int a=1,b,c,f,g,h,i,j,k,l,m,n,o,p;
    char d='O',e='X';
    printf("Game starts\n");
    
    for(int i=1; i<=10; i++){
        for(int j=1; j<=3; j++){
            for(int k=1; k<=3; k++){
                if(b==a){
                    printf("%c  ",d);
                }
                else if(c==a){
                    printf("%c  ",e);
                }
                else if(g==a){
                    printf("%c  ",d);
                }
                else if(h==a){
                    printf("%c  ",e);
                }
                else if(m==a){
                    printf("%c  ",d);
                }
                else if(p==a){
                    printf("%c  ",d);
                }
                else if(n==a){
                    printf("%c  ",e);
                }
                else if(o==a){
                    printf("%c  ",d);
                }
                else if(l==a){
                    printf("%c  ",e);
                }
                else printf("%d  ",a);
                a=a+1;
            }
            printf("\n");
        }
        a=1;
        printf("Please choose from 1-9 where you want to mark :");
        if(i==1){ scanf("%d",&b);}
        else if(i==2){ scanf("%d",&c);}
        else if(i==3){ scanf("%d",&g);}
        else if(i==4){ scanf("%d",&h);}
        else if(i==5){ scanf("%d",&p);}
        else if(i==6){ scanf("%d",&n);}
        else if(i==7){ scanf("%d",&o);}
        else if(i==8){ scanf("%d",&l);}
        else if(i==9){ scanf("%d",&m);}
    }
    
    printf("Game ends ");
}