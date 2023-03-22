#include "main.h"

/**
 * _abs - verify the absolute value
 *
 * @a: verify the parameter
 * Return: returns a
 */

int _abs(int a)
{
	if (a < 0)
		a = -(a);
	else if (a > 0)
		a = a;
	return (a);
}
