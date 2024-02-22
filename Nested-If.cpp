#include <stdio.h>

int main()
{
    int a = 5;
    int b = 10;
    int c = 2;

    if (a > 3)
    {
        printf("Hy, I'm outer if scope\n");
        if (b < 15)
        {
            printf("Hy, I'm inner (nested if) scope\n");
            if (c > 5)
            {
                printf("OH you r greater..\n");
            }
            else
            {
                printf("oh.. you r smaller..\n");
            }
        }
        else
        {
            printf("Hy, I'm inner (nested else) scope");
        }
    }
    return 0;
}