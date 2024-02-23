#include <stdio.h>
#include <math.h>
int main()
{
    int num;
    int sum;
    printf("Enter any number:");
    scanf("%d", &num);
    sum = pow(num, 3);
    // for (int i = 1; i <= num; i++)
    // {
    //     sum = sum + i;
    // }
    printf("Sum of numbers is %d", sum);
    return 0;
}