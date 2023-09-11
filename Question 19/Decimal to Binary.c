#include <stdio.h>

int main()
{
    int l=0,n=8,i=0;
    int arr[n];
    while(n>0){
        arr[l] = n%2;
        n/=2;
        l++;
    }
    for(i=l-1;i>=0;i--)
    printf("%d",arr[i]);
}
