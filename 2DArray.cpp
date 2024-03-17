#include <stdio.h>

int main()
{
    int arr[][3] = {{1, 2, 3},
                    {4, 5, 6},
                    {7, 8, 9}};
    int arr1[3][3];
    int sum = 0;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter the value for %d and %d\n", i, j);
            scanf(" %d", &arr1[i][j]);
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {

            printf(" %d", arr1[i][j]);
            sum += arr1[i][j];
        }
        printf("\n");
    }
    printf("Sum of all elements of an array is %d", sum);
    return 0;
}