#include "main.h"
#include <stdarg.h>

/**
* function_man - functions
* @l: list of arguments
* @c: character to find
* Return: count of printed characters
* 
* 
*/
int function_man(char c, va_list l)
{
	int count = 0;

	count = _switch(c, l);

	if (c == 'p')
	count = print_ptr(l);
	return (count);
}

/**
* _switch - switch
* @l: list of arguments
* @c: character to find
* Return: count
* 
*/
int _switch(char c, va_list l)
{
	int count = 0;

	switch (c)
	{
		case 'b':
		count += print_unsign(l, 2);
		break;
		case 'c':
		count += print_character(l);
		break;
		case 'd':
		case 'i':
		count += print_sign(l, 10);
		break;
		case 'o':
		count += print_unsign(l, 8);
		break;
		case 'r':
		count += print_rev(l);
		break;
		case 'R':
		count += print_rot13(l);
		break;
		case 's':
		count += print_string(l);
		break;
		case 'u':
		count += print_unsign(l, 10);
		break;
		case 'x':
		count += print_base16(l, "0123456789abcdef");
		break;
		case 'X':
		count += print_base16(l, "0123456789ABCDEF");
		break;
		default:
		count = -1;
	}
	return (count);
}

