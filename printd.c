#include "main.h"
#include <unistd.h>
#include <limits.h>
#include <stdlib.h>

/**
 * printd - prints a double to stdout
 * @n: the double to be print
 * Return: the length of printed number
 */
int printd(int n)
{
	int count = 0;
	int n_cpy;
	char *str;
	char *strcpy;

	while (n_cpy != 0)
	{
		count++;
		n_cpy /= 10;
	}
	str = malloc(count);
	strcpy = numtostr(n, str, 10);
	write(1, strcpy, count + 1);
	free(str);
	return (count);
}
