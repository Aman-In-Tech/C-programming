//Matrix Addition
#include<stdio.h>
int main(){
    int a,b,c,d;
    printf("Enter the number of rows: ");
    scanf("%d",&a);
    printf("Enter the number of column: ");
    scanf("%d",&b);
    int ar[a][b],arr[a][b];
    printf("Enter the elements of first matrix: \n");
    for(int i=1; i<=a; i++){
        for(int j=1; j<=b; j++){
            printf("Element [%d][%d] :",i-1,j-1);
            scanf("%d",&ar[i][j]);
        }
    }
    printf("Enter the elements of second matrix:\n");
    for(int i=1; i<=a; i++){
        for(int j=1; j<=b; j++){
            printf("Element [%d][%d] :",i-1,j-1);
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Sum of the matrixes : \n");
     for(int i=1; i<=a; i++){
        for(int j=1; j<=b; j++){
            printf("%d   ",ar[i][j]+arr[i][j]);
        }
        printf("\n");
    }
}