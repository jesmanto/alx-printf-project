#include "main.h"
#include <stdlib.h>

int print_d(long n, int base)
{
	int count, c;
	char *nums = "0123456789abcdef";

	if (n < 0)
	{
		write(1, "-", 1);
		return (print_d(-n, base) + 1);
	}
	else if (n < base)
	{
		c = nums[n];
		return (write(1, &c, 1));
	}

	count = print_d(n / base, base);
	return (count + print_d(n % base, base));
}
