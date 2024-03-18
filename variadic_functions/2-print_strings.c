#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - Prints strings, followed by a new line.
 *
 * @separator: The string to be printed between the strings.
 *
 * @n: The number of strings passed to the function.
 *
 * ...: Strings to print.
 *
 */

void print_strings(const char *separator, const unsigned int n, ...)
{

	va_list str;
	unsigned int loop;

	va_start(str, n);

	for (loop = 0; loop < n; loop++)
	{
		if (str != NULL)
		{
			printf("%s", va_arg(str, char *));
		}

		else
		{
			printf("(nil)");
		}

		if (loop == (n - 1))
		{
			continue;
		}
		if (separator != NULL)
		{
		printf("%s", separator);
		}
	}

	va_end(str);

	printf("\n");

}
