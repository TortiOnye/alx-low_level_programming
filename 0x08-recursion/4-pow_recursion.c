#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: value to raise
 * @y: power
 *
 * Return: result of the power
 */
int _pow_recursion(int y, int x)
{
	if (x < 0)
		return (-1);
	if (x == 0)
		return (1);
	return (y * _pow_recursion(y, x - 1));
}
