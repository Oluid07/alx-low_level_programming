#include <stdio.h>

/**
 * main - main is the entry point to the program
 *
 * Return: returns zero
 */

int main(void)
{
	char i;

	for (i = 'z'; i >= 'a'; i--)
		putchar(i);
	putchar('\n');
	return (0);
}
