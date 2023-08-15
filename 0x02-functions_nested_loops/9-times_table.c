#include <stdio.h>

/**
 * times_table - prints the 9 times table
 */
void times_table(void)
{
    int row, column;

    for (row = 0; row <= 9; row++)
    {
        for (column = 0; column <= 9; column++)
        {
            int result = row * column;

            if (column != 0)
                printf(", ");

            if (result >= 10)
                printf("%d", result);
            else
                printf(" %d", result);
        }
        printf("\n");
    }
}

int main(void)
{
    times_table(); // Call the function to print the 9 times table
    return 0;
}

