#include <stdio.h>

int main()
{
    int n; //number;
    int pos; //position to clear the bit;
    n=(n & ~(1<<pos));
    printf("%d",n);
}