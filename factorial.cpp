#include <stdio.h>
int main()
{
    int i;
    printf("Enter the number for calculating factorial..");
    scanf("%d", &i);
    int fact = 1;

    for (int j = 1; j < i + 1; j++)
    {
        fact *= j;
    }
    printf("%d", fact);
    return 0;
}