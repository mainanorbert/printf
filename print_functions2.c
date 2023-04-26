#include "main.h"

/**
 * print_d - prints decimals
 * @list: arguments given
 * Return: returns an int
 */
int print_d(va_list list)
{
	long int n;

	n = va_arg(list, long int);
	print_decimal(n);
	return (0);
}
