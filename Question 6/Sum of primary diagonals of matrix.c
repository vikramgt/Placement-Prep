#include <stdio.h>

int main()
{
    int i,j,col,row,mat[10][10],sum=0;
    printf("Enter the number of rows and columns of matrix 1: ");
    scanf("%d%d",&row,&col);
    printf("Enter the elements of matrix 1: ");
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            scanf("%d",&mat[i][j]);
        }
    }
    
    printf("The elements are:");
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            printf(" %d",mat[i][j]);
        }
    }
    printf("\nThe sum of the diagonal elements are: ");
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            if(i==j){
                sum = sum + mat[i][j];
            }
        }
    }
    printf(" %d",sum);
}