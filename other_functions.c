#include "main.h"
/**
 * print_decimal - prints decimal
 * @myNum: prints a number
 * Return: count
 */

int print_decimal(int myNum)
{
	int count = 0;

	if (myNum < 0)
	{
		_putchar('-');
		count++;
		myNum = -myNum;
	}
	if (myNum >= 10)
	{
		count += print_decimal(myNum / 10);
	}
	_putchar(myNum % 10 + '0');
	count++;
	return (count);
}
