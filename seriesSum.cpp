#include <stdio.h>
int main()
{
    int sum = 0;
    for (int i = 1; i < 50; i = 2 * i + 1)
    {
        sum = sum + i;
    }
    printf("sum of series..%d", sum);
    return 0;
}