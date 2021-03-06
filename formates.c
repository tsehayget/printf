#include "main.h"
#include <stdio.h>
#include <stdarg.h>

/**
* print_character - prints character
* @l: list of arguments
* Return: amount of characters
*/
int print_character(va_list l)
{
	_putchar(va_arg(l, int));
	return (1);
}

/**
* print_sign - print sign
* @l: list of arguments
* @b: base 10, 8, 16, 2 etc.
* Return: num of characters
*/
int print_sign(va_list l, int b)
{
	int i = 0, count = 0;
	char *s;

	i = va_arg(l, int);
	if (i < 0)
	{
		i = -(i);
		_putchar('-');
		count += 1;
	}
	s = convert_to("0123456789ABCDEF", i, b);
	_puts(s);
	count += _strlen(s);
	return (count);
}

/**
 * print_unsign - print_unsign
 * @l: va_list parameter
 * @b: base 10, 8, 16 etc.
 * Return: num of characters
 */
int print_unsign(va_list l, int b)
{
	int count = 0;
	unsigned int i;
	char *s;

	i = va_arg(l, unsigned int);
	s = convert_to("0123456789ABCDEF", i, b);
	_puts(s);
	count = _strlen(s);

	return (count);
}

/**
 * print_string - prints string
 * @l: list of arguments
 *
 * Return: count
 */
int print_string(va_list l)
{
	char *s;
	int count = 0;

	s = va_arg(l, char *);
	if (!s)
	{
		s = "(null)";
		_puts(s);
		return (_strlen(s));
	}
	_puts(s);
	count = _strlen(s);
	return (count);
}
