#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>
#include <stdio.h>

/**
 * struct format - choose the format to print.
 *
 * @format: types of arguments.
 *
 * @function: The function associated to the type argument.
 *
 */

typedef struct format
{
char *format;
void (*function)(char *separator, va_list arg);
} format_t;


int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
