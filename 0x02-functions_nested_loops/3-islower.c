#include "main.h"

/**
 * _islower - prints the alphabet lower case
 *
 * @c: defines the parameter to be printed
 *
 * Return: returns one if is a lower case c else returns zero
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
