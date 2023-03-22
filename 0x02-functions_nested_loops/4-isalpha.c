#include "main.h"

/**
 * _isalpha - checks for alphabets
 *
 * @c: defnes the parameter to be checked
 * Return: returns either one or zero
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
