#include <stdio.h>
#include "main.h"

int main(void)
{
    char c = 'H';
    char *s = "Hello, world!";
    int n = 3;
    _printf("This %c is good\n", c);
    _printf("Nober %s\n", s);
    _printf("The number is %d\n", n);
    _printf("The percent sign: %%\n");
    return 0;
}
