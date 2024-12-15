#include<stdio.h>
void england(){
    printf("You are in England \n");
    return;
}
void america(){
    printf("You are in America \n");
    england();
    return;
}
void japan(){
    printf("You are in Japan \n");
    america();
    return;
}
int main(){
    printf("You are in India \n");
    japan();
    return 0;
}