#include "main.h"

/**
 * _islower - Checks if a character is lowercase.
 *
 * Return: 1 if character is lowercase, 0 otherwise.
 * @c: The character to be checked.
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
