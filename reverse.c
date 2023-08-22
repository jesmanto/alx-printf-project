#include "main.h"
/**
 * reverse - reverse a string
 * @s: string to reverse
 * @len: length of integer
 * Return: nothing
 */
char *reverse(char *s, int len)
{
	int begin = 0;
	int finish = len - 1;
	char tmp;

	while (begin < finish)
	{
		tmp = s[begin];
		s[begin] = s[finish];
		s[finish] = tmp;
		finish--;
		begin++;
	}
	return (s);
}
