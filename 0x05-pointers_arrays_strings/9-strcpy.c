#include "main.h"

/**
 * _strcpy - copies a string to a pointer
 *
 * @dest: defines a parameter
 * @src: defines a parameter
 * Return: returns dest
 */

char *_strcpy(char *dest, char *src)
{
	int l = 0;
	int x = 0;

	while (*(src + l) != '\0')
	{
		l++;
	}

	for ( ; x < l ; x++)
	{
		dest[x] = src[x];
	}

	dest[l] = '\0';

	return (dest);
}
