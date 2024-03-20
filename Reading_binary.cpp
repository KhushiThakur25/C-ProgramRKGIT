#include <stdio.h>

int main()
{
    FILE *fptr;
    int num;

    fptr = fopen("file.bin", "rb");

    if (fptr == NULL)
    {
        printf("Error opening file!\n");
        return 1;
    }

    fread(&num, sizeof(int), 1, fptr);
    printf("Read from file: %d\n", num);

    fclose(fptr);

    return 0;
}
