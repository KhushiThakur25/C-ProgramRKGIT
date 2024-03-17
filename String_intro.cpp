#include <stdio.h>
#include <string.h>
int main()
{
    char str[] = "Hello";
    char str1[23];

    // printf("Enter the string:");
    // scanf("%[^\n]s", &str1);
    int n = strlen(str);

    printf("Str1 is:", str1);
    int s = strcmp(str, str1);
    if (s == 0)
    {
        printf("It is equal..");
    }
    else
    {
        printf("It doesn't equal..");
    }
    // printf("%d\n", n);
    // printf("%s", str);
    return 0;
}