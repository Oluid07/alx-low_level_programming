#include "main.h"

/**
 * print_diagonal - prints a diagonal line
 * @n: defines the parameters
 *
 * Return: returns zero
 */

void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i;
		int x;

		for (i = 0; i < n; i++)
		{
			for (x = 0; x < n; x++)
			{
				if (x == i)
					_putchar('\\');
				else if (x < i)
					_putchar (' ');
			}
			_putchar('\n');
		}
	}
}
