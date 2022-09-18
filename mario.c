#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;

    do
    {
        height = get_int("Height: ");
    }
    while (height < 1 || height > 8);

    for (int row = 0; row < height; row++)
    {
        // Adds gap before the bricks

        for (int space = 0; space < height - row - 1; space++)
        {
            printf(" ");
        }

        // Adds bricks

        for (int column = 0; column < row + 1; column++)
        {
            printf("#");
        }

        // Adds gap before the opposite side

        printf("  ");

        // Adds bricks for the opposite side

        for (int column = 0; column < row + 1; column++)
        {
            printf("#");
        }

        printf("\n");

    }
}

// expected result on height 3
//  # #
// ## ##
//### ###