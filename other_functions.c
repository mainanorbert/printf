#include "main.h"
/**
 * print_decimal - prints decimal
 * @num: prints a number
 * Return: count
 */

int print_decimal(int num)
{
	int count = 0;

	if (num < 0)
	{
		_putchar('-');
		count++;
		num = -num;
	}
	if (num >= 10)
	{
		print_decimal(num / 10);
	}
	_putchar(num % 10 + '0');
	count++;
	return (count);
}
