#include "main.h"
/**
 * _putchar - prints singlecharacter
 */
int print_c(va_list list)
{
	int count = 0;
	count += _putchar(va_arg(list, int));
	return (count);
}

int print_s(va_list list)
{
	int count = 0;
	char *str;
	int i = 0;

	str = va_arg(list, char *);
	if (str == NULL)
		/**str = "(null)";*/
		return ();
	while (str[i] != '\0')
	{
		count += _putchar(str[i]);
		i++;
	}
	return (count);
}
