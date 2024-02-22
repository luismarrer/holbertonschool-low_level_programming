#include "main.h"

/**
 * print_last_digit - numbers last part
 *
 *@n: int that work with
 *
 * Return: digit las value
 *
 */
int print_last_digit(int n)
{
	int a;

	if (n < 0)
		n = -n;

	a = n % 10;

	if (a < 0)
		a = -a;

	_putchar(a + '0');

	return (a);
}
