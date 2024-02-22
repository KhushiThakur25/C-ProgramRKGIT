#include <stdio.h>

int main()
{
    int a, b, add, sub, mul, div;
    printf("Enter the value of a");
    scanf("%d", &a);

    printf("Enter the value of b");
    scanf("%d", &b);

    // pre-post operators -unary (single)
    // ++a,--a
    printf("%d\n", ++a);
    printf("%d\n", --a);
    printf("%d\n", b++);
    printf("%d\n", b);
    printf("%d\n", b--);
    printf("%d\n", b);

    return 0;
}