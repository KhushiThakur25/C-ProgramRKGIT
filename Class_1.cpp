#include <stdio.h>

int main()
{
    int a = 5;
    int b = 6;
    int c;
    int n;
    float d = 8.9;
    float e = 1.2;
    c = a + b;
    c = d + e;
    printf("Enter the value..");
    scanf("%d", &n);
    c = a + n;
    printf("Sum of %d and %d is %d", a, n, c);

    return 0;
}