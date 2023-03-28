#include "main.h"

/**
 * swap_int - swaps the values of 'a' and 'b'
 * @a: stores a value
 * @b: stores a value
 *
 * Return: returns zero
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
