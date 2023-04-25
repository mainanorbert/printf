#include <unistd.h>

/**
 * _putchar - prints single character
 * @c: character to print
 * Return: 1 for success and -1 for failure
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
