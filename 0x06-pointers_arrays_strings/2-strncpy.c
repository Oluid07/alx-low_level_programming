#include "main.h"

/**
 * _strncpy - copy a string
 *
 * @dest: stores value
 * @src: stores value
 * @n: stores value
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int x;

	x = 0;
	while (x < n && src[x] != '\0')
	{
		dest[x] = src[x];
		x++;
	}
	while (x < n)
	{
		dest[x] = '\0';
		x++;
	}

	return (dest);
}

