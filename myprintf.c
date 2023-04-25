#include "main.h"

/**
 * _printf - prints formatted string to standard output
 * @format: format specified (char and string)
 * Return: number of characters printed to output
 */
int _printf(const char *format, ...)
{
	va_list args;
	int (*fun)(va_list);
	int len = 0, i = 0;

	va_start(args, format);
	if (!format[i])
		return (-1);
	if (!format[i + 1] && format[i] == '%')
		return (-1);
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			if (compare_func(&format[i]) == NULL)
			{
				return (-1);
			}
			else
			{
				fun = compare_func(&format[i]);
				len += fun(args);
			}
		}
		else
			len += _putchar(format[i]);
		i++;
	}
	va_end(args);
	return (len - 1);
}
