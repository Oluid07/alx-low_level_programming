#include "main.h"

/**
 * print_line - prints a straight line
 *
 * @n: defines the parameter
 * Return: returns zero
 */

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i;

		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
