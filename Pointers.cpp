#include <stdio.h>
int main()
{
    // 32-bit  = 4 bytes;
    // 64-bit = 8bytes;
    int b = 76;
    char c = 'g';
    char *ptrg = &c;
    int *ptr = &b;
    printf("The address of ptr is %p\n", ptr);
    printf("The address of ptr is %p\n", *ptr);
    printf("The adress of b is %p\n", &b);
    printf("The value of b is %d\n", b);
    printf("The value of b is %x\n", *ptr);
    printf("Size of int pointer %d\n", sizeof(ptr));
    printf("Size of char pointer %d\n", sizeof(ptrg));
    printf("The address of ptrg %x\n", &ptrg);
    printf("The address of ptrg %d\n", *ptrg);

    return 0;
}