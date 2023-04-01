#include "main.h"
#include <stdio.h>

/**
 * print_buffer - prints a buffer
 * @b: buffer
 * @size: size
 * Return: returns zero
 */

void print_buffer(char *b, int size)
{
	int n;
	int x;
	int i;

	n = 0;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (n < size)
	{
		x = size - n < 10 ? size - n : 10;
		printf("%08x: ", n);
		for (i = 0; i < 10; i++)
		{
			if (i < x)
				printf("%02x", *(b + n + i));
			else
				printf("  ");
			if (i % 2)
			{
				printf(" ");
			}
		}
		for (i = 0; i < x; i++)
		{
			int c = *(b + n + i);

			if (c < 32 || c > 132)
			{
				c = '.';
			}
			printf("%c", c);
		}
		printf("\n");
		n += 10;
	}
}

