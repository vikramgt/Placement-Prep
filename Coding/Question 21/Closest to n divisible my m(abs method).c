#include <stdlib.h>
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
    
    int q = n/m;
    int p1 = q*m;
    int p2 = (n * m) > 0 ? (m * (q + 1)) : (m * (q - 1));
    if(abs(n-p1)<abs(n-p2)){
        return p1;
    }
    else
    return p2;
}