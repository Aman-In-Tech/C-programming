//Sum of principal diagonal matrix
#include<stdio.h>
int main(){
     int a,sum=0;
    printf("Enter the number of rows and columns(must be the same): ");
    scanf("%d",&a);
    int ar[a][a];
    printf("Enter the elements of matrix: \n");
    for(int i=1; i<=a; i++){
        for(int j=1; j<=a; j++){
            printf("Element [%d][%d] :",i-1,j-1);
            scanf("%d",&ar[i][j]);
        }
    }
    
     for(int i=1; i<=a; i++){
        sum=sum+ar[i][i];
    }
    printf("Sum of the principal diagonal elements: %d",sum);
}