#ifndef MAIN_H
#define MAIN_H
#include <stddef.h>
#include <stdarg.h>
/*#define l ((INT_MAX) + (1024))*/

/**
 * struct myfunc - takes specifier and points to a function specified
 * @sp: pointer to specifier
 * @myprint: function pointer to function retirning va_list
 */
typedef struct myfunc
{
	char *sp;
	int (*myprint)(va_list);
}
myfunc_t;
int _putchar(char c);
int _printf(const char *format, ...);
int print_c(va_list list);
int print_s(va_list list);
int (*compare_func(const char *a))(va_list);
int percentage_sign(va_list list __attribute__((unused)));
int print_d(va_list list);
void print_decimal(int n);
#endif
