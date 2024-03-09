#include <stdio.h>

int sum(int n, int result)
{

    if (n == 0)
    {
        return result;
    }
    result += n;
    return sum(n - 1, result);
}

int main()
{
    int n = 5;
    int result = 0, add;
    add = sum(n, result);
    printf("Sum of %d is %d", n, add);
    return 0;
}