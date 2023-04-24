#include "main.h"
#include <stdarg.h>
#include <unistd.h>
#include <stddef.h>
#include <stdlib.h>

/**int _putchar(char c)
{
    return (write(1, &c, 1));
}*/

int _printf(const char *format, ...)
{
    int count = 0;
    va_list args;
    va_start(args, format);
    /*va_list (*p_func)(va_list);*/
    while (*format)
    {
        if (*format == '%')
        {
            format++;
            if (*format == '%')
            {
                count += _putchar('%');
            }
	    else
	    {
		    compare_func(va_arg(args, char *));
	    }
        }
        else
        {
            count += _putchar(*format);
        }
        format++;
    }
    va_end(args);
    return (count);
}
