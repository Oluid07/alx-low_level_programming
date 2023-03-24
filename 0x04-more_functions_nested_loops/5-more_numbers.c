#include "main.h"

/**
 * more_numbers - prints 0 - 14 mutiple times
 *
 * Return: returns zero
 */

void more_numbers(void)
{
	int i;
	int x;

	for (i = 1; i <= 10; i++)
	{
		for (x = 0; x <= 14; x++)
		{
			if (x >= 10)
				_putchar('1');
			_putchar (x % 10 + '0');
		}
		_putchar('\n');
	}
}
