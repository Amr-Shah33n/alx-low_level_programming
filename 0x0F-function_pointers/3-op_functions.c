#include "3-calc.h"

/**
 * op_add - adds two numbers
 * @a: input number
 * @b: input number
 * Return: int sum
 **/
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - subtracts two numbers
 * @a: input number
 * @b: input number
 * Return: int differenct
 **/
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiplies two numbers
 * @a: input number
 * @b: input number
 * Return: product of two numbers
 **/
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - divides two numbers
 * @a: dividend
 * @b: divisor
 * Return: result of division
 **/
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - returns result of mod operator
 * @a: number
 * @b: mod divider
 * Return: reuslt of a % b
 **/
int op_mod(int a, int b)
{
	return (a % b);
}
