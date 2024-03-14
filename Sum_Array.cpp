#include <stdio.h>

int main()
{
    int arr[5] = {1, 23, 45, 6, 4};
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        sum += arr[i];
    }
    printf("%d is the sum..", sum);
    return 0;
}