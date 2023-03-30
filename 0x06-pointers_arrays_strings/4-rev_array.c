#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 *
 * @a: array
 * @n: size of array
 * Return: returns zero
 */

void reverse_array(int *a, int n)
{
	int i;
	int x;

	for (i = 0; i < n--; i++)
	{
		x = a[i];
		a[i] = a[n];
		a[n] = x;
	}
}
