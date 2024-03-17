#include <stdio.h>
#include <string.h>
void reverse(char str[], int start, int end)
{
    while (start < end)
    {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

void reverseWords(char str[])
{
    int len = strlen(str);
    reverse(str, 0, len - 1);
    int start = 0;
    for (int i = 0; i < len; i++)
    {
        if (str[i] == ' ')
        {
            reverse(str, start, i - 1);
            start = i + 1;
        }
    }
    reverse(str, start, len - 1);
}

int main()
{
    char str[] = "This is an object";
    reverseWords(str);
    printf("%s", str);
    return 0;
}