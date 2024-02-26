#include "main.h"

/**
 * print_rev - print a string in reverse
 * followed by a new line.
 *
 * @s: The string.
 *
 */

void print_rev(char *s)

{

	int charac = 0;
	int rev_charac;

	while (s[charac]  != '\0')
		/* count the string */
	{
		charac++;
	}

	for (rev_charac = charac - 1; rev_charac >= 0; rev_charac--)
		/* print the string in rev */

		_putchar(s[rev_charac]);

	_putchar('\n');

}
