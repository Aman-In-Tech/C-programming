//Matrix Multiplication
#include<stdio.h>
#include<conio.h>
int main(){
    int a,b,c,d,product=0,ar[10][10],arr[10][10],arrr[10][10];
    printf("Enter the number of rows for the first matrix: ");
    scanf("%d",&a);
    printf("Enter the number of column for the first matrix: ");
    scanf("%d",&b);
    printf("Enter the number of rows for the second matrix: ");
    scanf("%d",&c);
    printf("Enter the number of column for the second matrix: ");
    scanf("%d",&d);
    
    printf("Enter the elements of first matrix: \n");
    for(int i=1; i<=a; i++){
        for(int j=1; j<=b; j++){
            printf("Element [%d][%d] :",i-1,j-1);
            scanf("%d",&ar[i][j]);
        }
    }
    printf("Enter the elements of second matrix:\n");
    for(int i=1; i<=c; i++){
        for(int j=1; j<=d; j++){
            printf("Element [%d][%d] :",i-1,j-1);
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Product of the matrixes : \n");
     for(int i=1; i<=a; i++){
        for(int j=1; j<=d; j++){
            for(int k=1; k<=c; k++){
                product=product+ar[i][k]*arr[k][j];
            }
            arrr[i][j]=product;
            product=0;
            printf("%d   ",arrr[i][j]);
        }
        printf("\n");
    }
    getch();
}