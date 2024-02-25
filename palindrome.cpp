#include <stdio.h>
int main()
{
    int num, rev = 0, rem = 0;
    printf("Enter the number..\n");
    scanf("%d", &num);
    int org = num;
    do
    {
        rem = num % 10;
        rev = rev * 10 + rem;
        num /= 10;
    } while (num > 0);

    if (org == rev)
    {
        printf("palindrome..");
    }
    else
    {
        printf("Not a palindrome..");
    }
}