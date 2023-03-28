#include "main.h"

/**
 * _puts - prints a given phrase
 *
 * @str: holds a string
 * Return: returns zero
 */

void _puts(char *str)
{
	int n;

	for (n = 0; str[n] != '\0'; n++)
		_putchar(str[n]);
	_putchar('\n');
}
