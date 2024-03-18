#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - Prints numbers, followed by a new line.
 *
 * @separator: The string to be printed between numbers
 *
 * @n: The number of integers passed to the function
 *
 * ...: numbers to print
 *
 */

void print_numbers(const char *separator, const unsigned int n, ...)

{
	va_list num;
	unsigned int loop;

	va_start(num, n);

	for (loop = 0; loop < n; loop++)
	{
		printf("%d", va_arg(num, int));

		if (loop == (n - 1))
		{
			continue;
		}
		if (separator != NULL)
		{
			printf("%s", separator);
		}

	}

	va_end(num);

	printf("\n");
}
