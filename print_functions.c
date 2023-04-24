#include "main.h"
/**
 * _putchar - prints singlecharacter
 */
int print_c(va_list list)
{
	/*int count = 0;*/
	_putchar(va_arg(list, int));
	/*return (count);*/
	return (0);
}

int print_s(va_list list)
{
	int i = 0;

	/*int count = 0;*/
	char *str;

	str = va_arg(list, char*);
	if (str == NULL)
		str = "(null)";
		
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	return (0);
}
