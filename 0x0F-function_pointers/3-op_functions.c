#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * op_add - add two numbers
 * @a: first number to use for operation
 * @b: second number to use for operation
 *
 * Return: result of sum
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtract two numbers
 * @a: first number to use for operation
 * @b: second number to use for operation
 *
 * Return: result of subtraction
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiply two numbers
 * @a: first number to use for operation
 * @b: second number to use for operation
 *
 * Return: result of multiplication
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divide two numbers
 * @a: first number to use for operation
 * @b: second number to use for operation
 *
 * Return: result of division
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
 * op_mod - find the remainder of division of two numbers
 * @a: first number to use for operation
 * @b: second number to use for operation
 *
 * Return: remainder of division
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
