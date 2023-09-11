#include <stdio.h>

int main()
{
    int n,m;
    int i=0;
    int p=0;
    printf("Enter the bounds of the range: ");
    scanf("%d%d",&m,&n);
    
    for(i=m;i<=n;i++){
        if(i%3==0 && i%5==0){
            p = p + i;
        }
    }
    printf("The sum is: %d",p);
    
}
