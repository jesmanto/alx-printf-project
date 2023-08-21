#include "main.h"
#include <unistd.h>
/**
 * _printstr - write string to standard output
 * @s: string to be written
 * @cp: counter pointer
 */
void _printstr(const char *s, int *cp)
{
	int s_len = 0;

	if (!s)
		s = "(nil)";
	while (s[s_len] != '\0')
	{
		s_len++;
	}

	write(1, s, s_len);

	*cp += s_len;

}
