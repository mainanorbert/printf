#include "main.h"
/**
 * _putchar - prints singlecharacter
 */
int print_c(va_list list)
{
	char c;

	c = va_arg(list, int);
	_putchar(c);
	return (1);
}

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
