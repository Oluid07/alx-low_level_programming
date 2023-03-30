#include "main.h"

/**
 * _strncat - concatenates two strings
 *
 * @n: define parameter
 * @dest: destination string
 * @src: source string
 * Return: returns dest
 */

char *_strncat(char *dest, char *src, int n)
{
	char destlen = 0;
	char srclen = 0;
	int i;

	for (i = 0; dest[i] != '\0'; i++)
		destlen++;
	for (i = 0; src[i] != '\0'; i++)
		srclen++;
	for (i = 0; i < n; i++)
		dest[destlen + i] = src[i];
	return (dest);
}
