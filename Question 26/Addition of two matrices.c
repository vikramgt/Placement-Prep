#include<stdio.h>
int main(){
    int i,j,r1,c1,sum[50][50],a[50][50],b[50][50];
    printf("Enter the rows and columns of the matrix: ");
    scanf("%d%d",&r1,&c1);
    printf("Enter the elements of 1st matrix: ");
    for(i=1;i<=r1;i++){
        for(j=1;j<=c1;j++){
            scanf("%d",&a[i][j]);
            
        }
    }
    printf("Enter the elements of 2nd matrix: ");
    for(i=1;i<=r1;i++){
        for(j=1;j<=c1;j++){
            scanf("%d",&b[i][j]);
            
        }
    }
    printf("The addition of the matrix 1 and 2 is: ");
    for(i=1;i<=r1;i++){
        for(j=1;j<=c1;j++){
            sum[i][j] = a[i][j]+b[i][j]; 
            
        }
    }
    printf("The resultant matrix is: ");{
        for(i=1;i<=r1;i++){
        for(j=1;j<=c1;j++){
            printf(" %d",sum[i][j]); 
            
        }
    }
    }
}