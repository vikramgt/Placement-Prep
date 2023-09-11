#include <stdio.h>
#include <math.h>
int main()
{
    int i,j,a[50],n,even=0,odd=0;
    printf("Enter the size of the array :" );
    scanf("%d",&n);
    printf("Enter the elements of the array: ");
    for(i=1;i<=n;i++){
        scanf("%d",&a[i]);
    }
    for(i=1;i<=n;i++){
        if(a[i]%2==0){
            even+=a[i];
        }
        else{
            odd+=a[i];
        }
    }
    printf("\nThe sum of even numbers is: %d",even);
    printf("\nThe sum of odd numbers is: %d",odd);
}
