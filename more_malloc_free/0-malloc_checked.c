#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - This function is equal to malloc.
 * It will allocate memory using malloc,
 * but with the difference that if it fails allocating memory,
 * the code will immediately end with a return 98.
 *
 * @b: the size of the memory to allocate.
 *
 * Return: a pointer to the allocated memory
 * If malloc fails, causes normal process termination with a status value of 98
 *
 */

void *malloc_checked(unsigned int b)

{

	void *ptr = malloc(b);

	if (ptr == NULL)

	{
		exit(98);
	}

	return (ptr);

}
