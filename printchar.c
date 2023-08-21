#include "main.h"
#include <unistd.h>
#include <stdio.h>
/**
 * _printchar - function that writes a char to io
 * @c: character to write
 * @cp: count pointer
 */
void _printchar(char c, int *cp)
{
	write(1, &c, 1);
	*cp += 1;
}
