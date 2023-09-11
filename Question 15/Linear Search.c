#include<stdio.h>
int main()
{
    int i,n,key,a[50];
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    printf("Enter the array elements: ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter the number to be searched: ");
    scanf("%d",&key);
    for(i=0;i<=n;i++){
        if(a[i]==n){
            printf("Key %d not found in the array",key);
        }
        if(a[i]==key){
            printf("Key %d found at array position %d",key,i+1);
            break;
        }
    }
}