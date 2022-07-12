#include "main.h"
#include <stdarg.h>

/**
 * function_man - functions
 * @l: list of arguments
 * @c: character to find
 * Return: count of printed characters
 */
int function_man(char c, va_list l)
{
	int count = 0;

	count = _switch(c, l);

	if (c == 'p')
		count = print_ptr(l);
	return (count);
}

