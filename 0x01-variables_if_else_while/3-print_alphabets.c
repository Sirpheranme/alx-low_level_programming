#include <stdio.h>
/**
 * main - Entry point
 * Return: 0
 */
int main(void)
{
    char r = 'a';
    char s = 'A';

    while (r <= 'z')
    {
        putchar(r);
        r++;
    }

    while (s <= 'Z')
    {
        putchar(s);
        s++;
    }

    putchar('\n');

    return 0;
}

