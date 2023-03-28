#include "main.h"

/**
 * print_rev - prints a string in reverse
 *
 * @s: holds the string
 * Return: returns zero
 */

void print_rev(char *s)
{
	int count = 0;
	int n;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	s--;
	for (n = count; n > 0; n--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
