#include "main.h"

/**
 * _isdigit - checks throughintergers 0 - 9
 *
 * @c: verify the char
 * Return: returns zero or one
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
