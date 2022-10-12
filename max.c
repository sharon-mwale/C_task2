#include <stdio.h>

/**Entry point
 *Main entry point
 *Return 0
 */

int main(void)
{
    int maximum = 10;
    int minimum = 5;

    if (maximum > minimum)
    {
        printf("Ten is the maximum number.");
    }
    else if (maximum < minimum)
    {
        printf("Five is a minimum number.");
    }
    else
    {
        printf("invalid");
    }
}