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
	int *pt = &count;

	if (!format)
		return (-1);
	va_start(args, format);
	while (format[i])
	{
		if (format[i] != '%')
			_printchar(format[i], pt);
		else
		{
			i++;
			if (format[i] == '%')
				_printchar(format[i], pt);
			else if (format[i] == 's')
				_printstr((va_arg(args, char *)), pt);
			else if (format[i] == 'c')
			{
				c = va_arg(args, int);
				_printchar(c, pt);
			}
			else if (format[i] == 'd')
				count += print_d((long)(va_arg(args, int)), 10);
			else if (format[i] == 'i')
				count += print_d((long)(va_arg(args, int)), 10);
			else if (format[i] == 'b')
				count += print_d((long)(va_arg(args, unsigned int)), 2);
		}
		i++;
	}
	va_end(args);
	return (count);
}
