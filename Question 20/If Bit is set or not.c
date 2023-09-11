#include <stdio.h>

int main()
{
    int n; //number;
    int pos; //position to check if bit is set or not;
    if((n & (1<<pos))!=0)
        printf("1");
    else
        printf("0");
}
