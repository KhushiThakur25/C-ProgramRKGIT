#include <stdio.h>

int main()
{
    int arr[5];
    int arr1[] = {5, 6, 2, 1, 5, 6, 9};

    int n;

    n = sizeof(arr1) / sizeof(arr1[0]);
    printf("%d\n", n);
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the element of an array\n");
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < 5; i++)
    {

        printf("%d  ", arr[i]);
    }
    // printf("%d", arr[2]);
    // arr[2] = arr[2]+2;
    return 0;
}