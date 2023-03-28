#include "main.h"

/**
 * print_array - prints integers
 *
 * @a: is the array
 * @n: elements of the array
 * Return: returns zero
 */

void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < (n - 1); x++)
	{
		printf("%d, ", a[x]);
	}
	if (x == (n - 1))
	{
		printf("%d", a[n - 1]);
	}
	printf("\n");
}
