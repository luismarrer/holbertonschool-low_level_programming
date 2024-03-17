#include "variadic_functions.h"

/**
 * sum_them_all - function that returns the sum of all its parameters.
 *
 * @n: number of parameters
 *
 * ...: parameter to sum
 *
 * Return: Total to sum.
 *
 */

int sum_them_all(const unsigned int n, ...)
{

	va_list argu;
	unsigned int loop;
	int total = 0;

	if (n == 0)
		return (0);

	va_start(argu, n);

	for (loop = 0; loop < n; loop++)
		total += va_arg(argu, int);

	va_end(argu);

	return (total);
}
