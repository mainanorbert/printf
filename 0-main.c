#include <stdio.h>
#include "main.h"
#include <limits.h>

int main(void)
{
    /*char c = 'H';
    char *s = "Hello, world! osiemo";
        
    _printf("This %c is good\n", c);
    _printf("Nober %s\n", s);
    _printf("Perc: [%%]\n");
    return 0;*/

	int len;
	int len2;
	/*unsigned int ui;
	void *addr;*/

	len = _printf("Let's try to printf a simple sentence.\n");
	len2 = printf("Let's try to printf a simple sentence.\n");
	_printf("Character:[%c]\n", 'H');
	printf("Character:[%c]\n", 'H');
	_printf("String:[%s]\n", "I am a string !");
	printf("String:[%s]\n", "I am a string !");
	len = _printf("Percent:[%%]\n");
	len2 = printf("Percent:[%%]\n");
	_printf("Len:[%d]\n", len);
	printf("Len:[%d]\n", len2);
	return (0);
}
