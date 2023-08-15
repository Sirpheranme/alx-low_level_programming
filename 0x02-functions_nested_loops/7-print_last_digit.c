#include <stdio.h>

/**
 * print_last_digit - prints the last digit of a number
 * @n: the integer whose last digit to print
 * Return: the value of the last digit
 */
int print_last_digit(int n)
{
    int last_digit = n % 10;

    if (last_digit < 0)
        last_digit = -last_digit;

    printf("%d", last_digit);
    return last_digit;
}

int main()
{
    int number = -12345;
    int last_digit = print_last_digit(number);
    printf("\nLast digit: %d\n", last_digit);

    return 0;
}

