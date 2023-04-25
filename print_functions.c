#include "main.h"
/**
 * print_c - print single character
 * @list: lists arguments
 * Return: character
 */
int print_c(va_list list)
{
	char c;

	c = va_arg(list, int);
	_putchar(c);
	return (1);

}

/**
 * percentage_sign - prints percentage
 * @list: list arg
 * Return: percentage
 */
int percentage_sign(va_list list __attribute__((unused)))
{
	_putchar('%');
	return (1);
}

/**
 * print_s - prints string
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
