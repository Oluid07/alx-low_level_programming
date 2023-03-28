#include "main.h"

/**
 * print_rev - prints a string in reverse
 *
 * @s: holds the string
 * Return: returns zero
 */

void print_rev(char *s)
{
	int n;
	int count = 0;

	for (n = 0; s[n] != '\0'; n++)
		count++;
	for (n = count; n >= 0; n--)
		_putchar(s[n]);
	_putchar('\n');
}
