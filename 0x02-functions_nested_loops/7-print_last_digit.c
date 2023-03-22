#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 *
 * @i: verify the parameter
 * Return: returns x
 */

int print_last_digit(int i)
{
	int x;

	x = i % 10;
	if (i < 0)
		x = -x;
	_putchar(x + '0');
	return (x);
}
