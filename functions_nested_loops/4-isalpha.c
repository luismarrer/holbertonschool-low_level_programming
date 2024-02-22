#include "main.h"

/**
 * _isalpha - checking the character on the alphabet
  * @c: checking this one
 * Return: 1 if c is a letter, 0 otherwise
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
