#include <stdio.h>
#include "main.h"
#include <limits.h>

int main(void)
{
    char c = 'H';
    char *s = "Hello, world!";
    
    _printf("This %c is good\n", c);
    _printf("Nober %s\n", s);
    return 0;
}
