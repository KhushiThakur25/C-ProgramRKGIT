// 1.  No argument without return value

#include <stdio.h>
// function declaration
void sum();
// Function Defintion
void sum()
{
    int x = 25, y = 35;
    printf("Sum of %d and %d is %d", x, y, (x + y));
}

int main()
{
    int x = 52, y = 18;
    sum(); // Function Calling..
    return 0;
}
