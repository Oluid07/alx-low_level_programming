#include "main.h"

/**
 * puts2 - prints specifi strings
 *
 * @str: stores the string
 * Return: returns zero
 */

void puts2(char *str)
{
	int count = 0;
	int n = 0;
	char *y = str;
	int x;

	while (*y != '\0')
	{
		y++;
		count++;
	}
	n = count - 1;
	for (x = 0 ; x <= n ; x++)
	{
		if (x % 2 == 0)
		{
			_putchar(str[x]);
		}
	}
	_putchar('\n');
}
