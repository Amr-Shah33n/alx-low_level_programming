#include "main.h"

/**
 * _pow_recursion - uses recursion to return x power y
 * @x: base int
 * @y: power int
 * Return - int result of x power y
 **/
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	if (y <= 1)
	{
		return (x);
	}
	return (x * _pow_recursion(x, --y));
}
