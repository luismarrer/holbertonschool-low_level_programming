#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - generates a random number
 * every time it is run and assigns this number
 * to the variable n.
 * It then calculates the last digit of n
 * and prints it, followed by an evaluation that determines
 * whether this last digit:
 * Is greater than 5,
 * in which case prints "y is greater than 5".
 * Equals 0,
 * in which case prints "y is 0".
 * Is less than 6
 * and is not 0,
 * in which case prints "and is less than 6 and is not 0".
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	int n;
	int last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit = n % 10;

	printf("Last digit of %d is %d", n, last_digit);
	if (last_digit > 5)
	{
		printf(" and is greater than 5\n");
	}
	else if (last_digit == 0)
	{
		printf(" and is 0\n");
	}
	else if (last_digit < 6 && last_digit != 0)
	{
		printf(" and is less than 6 and not 0\n");
	}

	return (0);
}
