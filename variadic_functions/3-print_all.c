#include "variadic_functions.h"

/**
 * print_char - Print character.
 *
 * @separator: string.
 *
 * @arg: Argument to print.
 */

void print_char(char *separator, va_list arg)
{

	printf("%s%c", separator, va_arg(arg, int));

}

/**
 * print_int - print integer.
 *
 * @separtor: string.
 *
 * @arg: Argument to print.
 */

void print_int(char *separator, va_list arg)
{

	printf("%s%i", separator, va_arg(arg, int));

}

/**
 * print_float - print float
 *
 * @separator: string.
 *
 * @arg: Argument to print.
 */

void print_float(char *separator, va_list arg)
{

	printf("%s%f", separator, va_arg(arg, double));

}

/**
 * print_string - print string.
 *
 * @separator: string.
 *
 * @arg: Argument to print.
 *
 */

void print_string(char *separator, va_list arg)
{
	char *str = va_arg(arg, char *);

	if (str == NULL)
	{
		printf("(nil)");
	}
	printf("%s%s", separator, str);

}

/**
 * print_all - Prints anything.
 *
 * @format: is a list of types of arguments passed to the function.
 *
 * ...: arguments to print.
 *
 */

void print_all(const char * const format, ...)
{
	va_list arg;
	int i = 0, j;
	char *separator = "";
	format_t formatos[] = {
	{"c", print_char},
	{"i", print_int},
	{"f", print_float},
	{"s", print_string},
	{NULL, NULL},
	};

	va_start(arg, format);

	while (format != NULL && format[i] != '\0')
	{
		j = 0;

		while(j < 4)
		{
			if(format[i] == formatos[j].format[0])
			{
				formatos[j].function(separator, arg);
				separator = ", ";
			}
			j++;
		}
		i++;
	}

	va_end(arg);
	printf("\n");
}
