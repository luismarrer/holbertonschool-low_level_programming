#include "main.h"
#include <stdlib.h>

/**
 * _strlen - function that returns
 * the length of a string.
 *
 * @s: pointer
 *
 * Return: output is total char.
 */

unsigned int _strlen(char *s)

{

	unsigned int i = 0;

	if (!s)
		return (0);

	while (s[i] != '\0')

	{
		++i;
	}

	return (i);

}

/**
 * string_nconcat - function that concatenates two strings.
 *
 * @s1: destiny
 * @s2: source
 * @n: maximum number of bytes from s2.
 *
 * Return: pointer to the new string, or NULL if the function fails.
 *
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)

{
	unsigned int s1_len = _strlen(s1);
	unsigned int s2_len = _strlen(s2);
	unsigned int i, total_len;
	char *new_str;

	if (n >= s2_len)

	{

		n = s2_len;

	}

	total_len = s1_len + n;

	new_str = malloc(total_len + 1);
	if (new_str == NULL)
		return (NULL);

	for (i = 0; i < s1_len; i++)
		new_str[i] = s1[i];

	for (i = 0; i < n; i++)
		new_str[s1_len + i] = s2[i];

	new_str[total_len] = '\0';

	return (new_str);

}

