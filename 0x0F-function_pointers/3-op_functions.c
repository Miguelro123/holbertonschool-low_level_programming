#include "3-calc.h"

/**
 * op_add - Add two numbers
 * @a: First number to use for operation
 * @b: Second number to use for operation
 *
 * Return: Result of sum
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Subtract two numbers
 * @a: First number to use for operation
 * @b: Second number to use for operation
 *
 * Return: Result of subtraction
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Multiply two numbers
 * @a: First number to use for operation
 * @b: Second number to use for operation
 *
 * Return: Result of multiplication
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Divide two numbers
 * @a: First number to use for operation
 * @b: Second number to use for operation
 *
 * Return: Result of division
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
 * op_mod - Find the remainder of division of two numbers
 * @a: First number to use for operation
 * @b: Second number to use for operation
 *
 * Return: Remainder of division
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
