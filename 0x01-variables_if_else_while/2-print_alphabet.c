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
        putchar(r);
        r++;
    }

    putchar('\n');

    return 0;
}

