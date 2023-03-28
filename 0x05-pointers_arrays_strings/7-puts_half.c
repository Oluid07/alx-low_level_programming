#include "main.h"

/**
 * puts_half - prints the other half of the string
 *
 * @str: stores the string
 * Return: returns zero
 */

void puts_half(char *str)
{
	int x, y;
	int n = 0;

	for (x = 0; str[x] != '\0'; x++)
		n++;
	y = (n / 2);

	if ((n % 2) == 1)
	{
		y = ((n + 1) / 2);
	}

	for (x = y; str[x] != '\0'; x++)
		_putchar(str[x]);
	_putchar('\n');

}
