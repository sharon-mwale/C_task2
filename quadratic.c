#include <stdio.h>
#include <math.h>

int main(void)
{
    int a;
    int b;
    int c;

    printf("Enter your a, b, b and c value./n");
    scanf("%d, %d, %d", &a, &b, &c);

    int sqr = b ^ 2 - 4 * a * c;
    int add = (-b + sqr) / 2 * a;
    int sub = (-b - sqr) / 2 * a;
    printf();
    return 0;
}