#include <cs50.h>
#include <stdio.h>

void print_row(int spaces, int blocks);

int main(void)
{
    int pyramid_height;

    do
    {
        pyramid_height = get_int("Enter the height of the pyramid:\n");
    }
    while (pyramid_height < 1);

    for (int i = 0; i < pyramid_height; i++)
    {
        print_row(pyramid_height - (i + 1), i + 1);
    }

    return 0;
}

// print a row with the given starting padding
// and then the blocks, finally two spaces
// and the blocks again
void print_row(int spaces, int blocks)
{
    for (int j = 0; j < spaces; j++)
    {
        printf(" ");
    }

    for (int k = 0; k < blocks; k++)
    {
        printf("#");
    }

    for (int l = 0; l < 2; l++)
    {
        printf(" ");
    }

    for (int k = 0; k < blocks; k++)
    {
        printf("#");
    }

    printf("\n");
}