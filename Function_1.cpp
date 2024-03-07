//1.Argument with return value

#include <stdio.h>
// function declaration
int sum(int a, int b);
// Function Defintion
int sum(int a, int b)
{
    return (a + b);
}

int main()
{
    int x = 52, y = 18, result = 0;
    result = sum(x, y);// Function Calling..
    printf("%d is the sum", result);
    return 0;
}
