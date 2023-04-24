#include "main.h"
/**
 * compare_func - compares spacefier and returns appropriate function
 * the argument to function pointer
 */
int (*compare_func(char *a))(va_list)
{
	int i = 0;
	myfunc_t func[] = {
		{"c", print_c},
		{"s", print_s},
		{NULL, NULL}
	};

	while (func[i].sp)
	{
		if (func[i].sp[0] == a[0])
		{
			return (func[i].myprint);
		}
		i++;
	}
	return (0);
}