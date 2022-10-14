#include "function_pointers.h"
#include "3-calc.h"
/**
 * op_add  - adds two inegers
 * @a: 1st number
 * @b: 2nd number
 * Return: sum
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - subtract b from a
 * @a: 1st number
 * @b: 2nd number
 * Return: difference
 */

int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiply a and b
 * @a: number 1
 * @b: number 2
 * Return: product
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - divide a by b
 * @a: number 1
 * @b: number 2
 * Return: quotient
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - find remainder after dividing 2 numbers
 * @a: number 1
 * @b: number 2
 * Return: modulus
 */
int op_mod(int a, int b)
{
	return (a % b);
}
