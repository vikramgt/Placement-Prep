#include <stdio.h>
int lcm(int ,int);
int main()
{
   int a,b,LCM;
   printf("Enter the 2 numbers to find lcm of: ");
   scanf("%d%d",&a,&b);
   LCM = lcm(a,b);
   printf("The LCM is: %d",LCM);
}
int lcm(int a, int b){
   int i=1,n;
   n = a*b;
    for(i=1;i<n;i++){
    if(i%a==0 && i%b==0){
        return i;
    }
    
}
}