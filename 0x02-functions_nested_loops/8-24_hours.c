#include "main.h"

/**
 * main - jack_bauer prints every minute
 * Return: 0
 */
int main(void)
{
	int r;
	print_last_digit(98);
	print_last_figit(0);
	r = print_last_digit(-1024);
	_putchar('0' + r);
	_putchar('\n');
	return (0)
}
