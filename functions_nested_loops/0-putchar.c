#include "main.h"

/**
 * main - print _putchar
 *
 * Return: Always 0 (Succes)
 *
 */

int main(void)
{
	char *str = "_putchar";

	while (*str)
	{
		_putchar(*str++);
	}
	_putchar('\n');

	return (0);
}

