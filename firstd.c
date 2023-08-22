#include "main.h"
#include <stdbool.h>
#include <stdio.h>
/**
 * firstdigit - gets the first digit of a number
 * @n: number to convert
 * @str: string to return
 * @base: number base
 * Return: string
 */
char *numtostr(int n, char *str, int base)
{
	int i = 0, mod;
	bool neg = false;

	if (n == 0)
	{
		str[i] = '0';
		str[i] = '\0';
		return (str);
	}

	if (n < 0 && base == 10)
	{
		neg = true;
		n *= -1;
	}
	while (n != 0)
	{
		mod = n % base;
		str[i++] = (mod > 9) ? (mod - 10) + 'a' : mod + '0';
		n /= base;
	}
	if (neg)
		str[i++] = '-';
	str[i] = '\0';


	return (reverse(str, i));
}
