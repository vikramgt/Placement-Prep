#include <stdio.h>
#define bool int
bool isPowerOfTwo(int x)
{
    /* First x in the below expression is for the case when
     * x is 0 */
    return x && (!(x & (x - 1)));
}
 
// Driver code
int main()
{
    // Function call
    isPowerOfTwo(31) ? printf("Yes\n") : printf("No\n");
    isPowerOfTwo(64) ? printf("Yes\n") : printf("No\n");
    return 0;
}
