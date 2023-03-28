#include "main.h"

/**
 * puts2 - prints specifi strings
 *
 * @str: stores the string
 * Return: returns zero
 */

void puts2(char *str)
{
	int n;

	for (n = 0; str[n] != '\0'; n++)
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}
