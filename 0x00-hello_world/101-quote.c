#include <stdio.h>
#include <unistd.h>

/**
 * main - main is the entry piont of the program
 *
 * Return: returns one
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 58);
	return (1);
}
