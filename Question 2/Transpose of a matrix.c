#include<stdio.h>
int main()
{
    int i,j,n,a[50][50];
    printf("Enter the rows and columns of the matrix: ");
    int r,c;
    scanf("%d%d",&r,&c);
    printf("Enter the elements of the matrix: ");
        for(i=0;i<r;i++){
            for(j=0;j<c;j++){
                scanf("%d",&a[i][j]);
            }
        }
    printf("The transpose of the matrix is: ");
        for(i=0;i<c;i++){
            for(j=0;j<r;j++){
                printf(" %d",a[j][i]);
            }
        }
}
