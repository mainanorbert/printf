#include "main.h"
/**
 * print_s- prints string
 * @list: lists arguments
 * Return: string count
 */
int print_s(va_list list)
{
	char *str;
	int i = 0;

	str = va_arg(list, char *);
	if (str == NULL)
	{
		str = "(null)";
	}
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	return (i);
}
