#include "main.h"

/**
 * positive_or_negative - verify for postive and negative integers
 *
 * @i: holds th integer to be verified
 * Return: returns zero
 */

void positive_or_negative(int i)
{
	if (i < 0)
		printf("%d is negative\n", i);
	else
		printf("%d is  positive\n", i);
}
