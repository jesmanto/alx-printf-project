#include "main.h"
#include <stdarg.h>
#include <unistd.h>
/**
 * _printf - function that prints a string format
 * @format: format to follow
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list args;
	int count = 0, i = 0;
	char c;
	char *s = "";
	int *pt = &count;

	if (!format)
		return (-1);
	va_start(args, format);
	while (format[i])
	{
		if (format[i] != '%')
		{
			_printchar(format[i], pt);
		}
		else
		{
			i++;
			if (format[i] == '%')
			{
				c = '%';
				_printchar(c, pt);
			}
			else if (format[i] == 's')
			{
				s = va_arg(args, char *);
				_printstr(s, pt);
			}
			else if (format[i] == 'c')
			{
				c = va_arg(args, int);
				_printchar(c, pt);
			}
		}
		i++;
	}
	va_end(args);
	return (count);
}
