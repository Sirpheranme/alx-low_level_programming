#include <stdio.h>
/**
 * main - Entry point
 * Return: 0
 */

int main(void)
{
    char r;
    r = 'a';

    while (r <= 'z')
    {
    if (r != 'q' && r != 'e')
    {
        putchar(r);
    }
        r++;
    }

    putchar('\n');

    return 0;
}
