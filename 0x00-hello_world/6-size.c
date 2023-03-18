#include <stdio.h>

/**
 * main - main is the entry piont
 *
 * Return: returns zero
 */
int main(void)
{
	printf("Size of a char is: %lu byte(s)," (unsigned long)sizeof(char));
	printf("Size of an int is: %lu byte(s)," (unsigned long)sizeof(int));
	printf("Size of a long is: %lu byte(s)," (unsigned long)sizeof(long int));
	printf("Size of a long long is: %lu byte(s)," (unsigned long)sizeof(long long int));
	printf("Size of a float is: %lu byte(s)," (unsigned long)sizeof(float));

	return (0);
}
