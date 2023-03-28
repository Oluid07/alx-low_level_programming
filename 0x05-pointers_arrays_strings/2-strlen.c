#include "main.h"

/**
 * _strlen - counts the length of a string
 *
 * @s: holds the value of the string length
 * Return: the length of the string
 */

int _strlen(char *s)
{
	int n;
	int count = 0;

	for (n = 0; s[n] != '\0'; n++)
	{
		count++;
	}
	return (count);
}
