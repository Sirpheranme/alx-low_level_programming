#include <stdio.h>
/**
 * main - Entry point
 * Return: 0
 */

int main(void)
{
    int r;
    r = 0;

    while (r < 10)
    {
        putchar(r + '0');
	r++;
    }

    putchar('\n');

    return 0;
}
