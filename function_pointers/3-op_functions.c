#include "3-calc.h"

/**
 * op_add - add
 *
 * @a: num1
 *
 * @b: num2
 *
 * Return: num1 + num2
 *
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtrae
 *
 * @a: num1
 *
 * @b: num2
 *
 * Return: num1 - num2
 *
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplica
 *
 * @a: num1
 *
 * @b: num2
 *
 * Return: num1 * num2
 *
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division
 *
 * @a: num1
 *
 * @b: num2
 *
 * Return: num1 / num2
 *
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
 * op_mod - sobrante de la division
 *
 * @a: num1
 *
 * @b: num2
 *
 * Return: num1 % num2
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
