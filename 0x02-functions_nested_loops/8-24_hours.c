#include "main.h"

/**
 * jack_bauer - prints a count down for 24hours
 *
 * Return: returns zero
 */

void jack_bauer(void)
{
	int i;
	int x;

	for (i = 0; i < 24; i++)
	{
		for (x = 0; x < 0; x++)
		{
			_putchar(i / 10 + '0');
			_putchar(i % 10 + '0');
			_putchar(':');
			_putchar(x / 10 + '0');
			_putchar(x % 10 + '0');
			_putchar('\n');

		}
	}
}
