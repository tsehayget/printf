#include "main.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_base16 - print_base16
 * @l: list of arguments
 * @rep: pointer parameter
 * Return: num of characters
 */
int print_base16(va_list l, char *rep)
{
	unsigned int i = 0, count = 0;
	char *s;

	i = va_arg(l, unsigned int);
	s = convert_to(rep, i, 16);
	_puts(s);
	count = _strlen(s);
	return (count);
}
/**
 * print_rev - prints reversed string
 * @l: list of arguments
 * Return: length of printed string
 */
int print_rev(va_list l)
{
	int i = 0;
	int j;
	char *s = va_arg(l, char*);

	if (!s)
	{
		return (-1);
	}
	while (s[i])
	{
		i++;
	}
	for (j = i - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}
	return (i);
}
/**
 * print_rot13 - prints string using rot13
 * @l: list of arguments
 * Return: length of printed string
 */
int print_rot13(va_list l)
{
	char rot13[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char ROT13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	char *s = va_arg(l, char*);
	int i, j;

	if (!s)
	{
		return (-1);
	}
	for (j = 0; s[j]; j++)
	{
		if (s[j] < 'A' || (s[j] > 'Z' && s[j] < 'a') || s[j] > 'z')
		{
			_putchar(s[j]);
		}
		else
		{
			for (i = 0; i <= 52; i++)
				if (s[j] == rot13[i])
					_putchar(ROT13[i]);
		}
	}
	return (j);
}
