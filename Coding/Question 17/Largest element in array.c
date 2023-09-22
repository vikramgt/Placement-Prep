#include <stdio.h>

int main()
{
    int m,i;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&m);
    int a[100];
    printf("Enter the elements of the array: ");
    for(i=0;i<m;i++){
    scanf("%d",&a[i]);
    }
    printf("The entered elements are: ");
    for(i=0;i<m;i++){
    printf(" %d",a[i]);
    }
    printf("\nThe largest number is: ");
    int max = a[0];
    for(i=1;i<m;i++){
    if(a[i]>max){
        max = a[i];
        
    }    
    }
    printf("%d",max);
}