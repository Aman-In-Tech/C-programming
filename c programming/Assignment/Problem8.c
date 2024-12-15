//Matrix is symmetric or not
#include<stdio.h>
int main(){
    int a,b=0;
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
        for(int j=1; j<=a; j++){
           if(ar[i][j]!=ar[j][i]) {
            b=1;
            break;
           } 
        }
    }
    if(b==0) printf("The matrix is symmetric.");
    else {
        printf("The matrix is not symmetric.");
    }
}