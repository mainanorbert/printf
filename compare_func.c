#include "main.h"
/**
 * compare_func - compares spacefier and returns appropriate function
 * the argument to function pointer
 * @a: takes in the specifier
 * Return: functions to perform a task for the specifier
 */
int (*compare_func(const char *a))(va_list)

{
	unsigned int i = 0;
	myfunc_t func[] = {
		{"c", print_c},
		{"%", percentage_sign},
		{"s", print_s},
		{"d", print_d},
		{"i", print_d},
		{NULL, NULL}
	};

	while (func[i].sp)
	{
		if (func[i].sp[0] == *a)
		{
			return (func[i].myprint);
		}
		i++;
	}
	return (NULL);
}
