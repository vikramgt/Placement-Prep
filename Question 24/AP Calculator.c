#include <stdio.h>
#include <math.h>
int main()
{
    int n,d,a,sum;
    printf("----------- Arithmetic Progression----------");
    printf("\nEnter the First term, Common difference and the nth term: ");
    scanf("%d%d%d",&a,&d,&n);
    sum = (n/2)*((2*a)+(n-1)*d);
    printf("\nThe sum is: %d",sum);
}
