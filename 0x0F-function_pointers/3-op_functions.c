#include "3-calc.h"

int op_add(int a int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - Returns the sum of two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: Sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - returns the difference of two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: the difference of a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Returns the product of two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Returns the division of two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: qoutient of a and b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Returns the remainder of division of two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: remainder of the division of a by b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
