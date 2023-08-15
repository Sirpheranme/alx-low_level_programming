#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: the starting number
 */
void print_to_98(int n)
{
    if (n <= 98)
    {
        for (int i = n; i <= 98; i++)
        {
            if (i != 98)
                printf("%d, ", i);
            else
                printf("%d\n", i);
        }
    }
    else if (n >= 98)
    {
        for (int j = n; j >= 98; j--) 
        {
            if (j != 98)
                printf("%d, ", j);
            else
                printf("%d\n", j);
        }
    }
}
