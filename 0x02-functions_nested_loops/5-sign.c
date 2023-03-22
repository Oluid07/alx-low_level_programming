#include "main.h"
#include <stdio.h>

/**
 * print_sign - prints signe
 *
 * @n: defines the parameters
 * Return: returns one zero and negative one
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
