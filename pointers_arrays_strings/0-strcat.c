#include "main.h"

/**
 * _strcat - Write a function that concatenates two strings.
 *
 * @dest: destiny
 * @src: source
 *
 * Return: destiny with source
 */

char *_strcat(char *dest, char *src)

{

	int e = 0, p  = 0;

	while (dest[e] != '\0')
	{
		e++;
	}

	while (src[p] != '\0')
	{
		dest[e + p] = src[p];
		p++;
	}

	return (dest);
}
