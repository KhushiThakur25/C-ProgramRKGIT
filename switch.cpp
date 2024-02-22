#include <stdio.h>

int main()
{
    int a, b;
    int ch;
    int result;
    printf("Enter the values of a and b..\n");
    scanf("%d%d", &a, &b);

    printf("1.addition \n 2.subtract \n 3.multiplication \n4.division \n5.exit\n");
    printf("Enter your choice..\n");
    scanf("%d", &ch);
    switch (ch)
    {
    case 1:
        result = a + b;
        printf("%d", result);
        break;
    case 2:
        result = a - b;
        printf("%d", result);
        break;
    case 3:
        result = a * b;
        printf("%d", result);
        break;
    case 4:
        result = a / b;
        printf("%d", result);
        break;
    case 5:
        break;
    default:
        printf("Your choice is invalid..");
        break;
    }
    return 0;
}