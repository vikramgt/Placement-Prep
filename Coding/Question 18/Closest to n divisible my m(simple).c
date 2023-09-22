#include <stdio.h>
int closest(int,int);
int main()
{
    int max,n,m,i;
    printf("Find the number closest to n divisible by m: ");
    printf("\nEnter 2 numbers n and m: ");
    scanf("%d%d",&n,&m);
    max = closest(m,n);
    printf("The closest number to %d divisible by %d is: %d",n,m,max);
    
}
int closest(int m,int n){
    int i,maxi;
    for(i=n;i>0;i--){
        if(i%m==0){
            maxi = i;
            break;
        }
        
    }return maxi;
}