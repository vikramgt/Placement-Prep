#include <stdio.h>
int main()
{
    int i, j, k, r, l, d, n;
    int temp;
    int a[50];
    printf("Enter the array size: ");
    scanf("%d", &n);
    printf("Enter the array elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter the sub array bounds. Enter Right Bound and Left Bound: ");
    scanf("%d%d",&r,&l);
    printf("Enter the number of times to shift right: ");
    scanf("%d",&d);
    temp = a[r];
    for(i=0;i<d;i++){
        for(j=r;j<=l;j++){
            if(j==l){
                a[j]=temp;
                break;
            }
            a[j]=a[j+1];
        }
        temp = a[r];
    }
    printf("The shifted array is: ");{
        for(i=0;i<n;i++){
            printf(" %d",a[i]);
        }
    }
    
}