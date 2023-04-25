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
