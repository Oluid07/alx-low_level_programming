#include <stdio.h>

/**
 * main - main is the entry point of the program
 *
 * Return: returns zero
 */

int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		if (i != 'q' && i != 'e')
		putchar(i);
	putchar('\n');
	return (0);
}
