#include<stdio.h>
int main(){
    int n=3,i=0,j=0,sum=0;
    int m[10][10];
    printf("Enter matrix: \n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&m[i][j]);
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(j==(n-(i+1))){
                sum+=m[i][j];
            }
        }
    }
    printf("Sum is: %d",sum);
}
        