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
				_printchar('%', pt);
			else if (format[i] == 's')
				_printstr((va_arg(args, char *)), pt);
			else if (format[i] == 'c')
				_printchar((va_arg(args, int)), pt);
			else if (format[i] == 'd')
				count += printd((va_arg(args, int)));
			else if (format[i] == 'i')
				count += printd((va_arg(args, int)));
		}
		i++;
	}
	va_end(args);
	return (count);
}
