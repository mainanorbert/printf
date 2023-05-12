#include "main.h"

/**
 * print_d - prints decimals
 * @list: arguments given
 * Return: returns an int
 */
int print_d(va_list list)
{
	int n, i;

	n = va_arg(list, int);
	i = print_decimal(n);
	return (i);
}
