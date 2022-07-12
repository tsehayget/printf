#include "main.h"
/**
* _printf - printf function
* @format: const character pointer
* Return: returns number of characters
*/
int _printf(const char *format, ...)
{
	const char *string;
	int count = 0;
	va_list l;

	if (!format)
	return (-1);

	va_start(l, format);
	string = format;

	count = loop(l, string);
	va_end(l);
	return (count);
}
/**
* loop - loop format
* @l: va_list arg
* @string: pointer from format
* Return: num of characters
*/
int loop(va_list l, const char *string)
{
	int i = 0, f = 0, count_f = 0, count = 0, checker = 0;

	while (i < _strlen((char *)string) && *string != '\0')
	{
		char c = string[i];

		if (c == '%')
		{
			i++, f++;
			c = string[i];
			if (c == '\0' && _strlen((char *)string) == 1)
			return (-1);
			if (c == '\0')
			return (count);
			if (c == '%')
			{
				f++;
			}
			else
			{
				count_f = function_man(c, l);
				if (count_f >= 0 && count_f != -1)
				{
					f++;
					c = string[i];
					if (c == '%')
					f--, count = count + count_f;
				}
				else if (count_f == -1 && c != '\n')
				{
					count += _putchar('%');
				}
			}
		}
		checker = check_percent(&f, c);
		count += checker;
		if (checker == 0 && c != '\0' && c != '%')
		count += _putchar(c), i++, checker = 0;
	}
	return (count);
}
/**
 * check_percent - call function manager
 * @f: value by reference
 * @c: character
 * Return: 1 if % is printed
 */
int check_percent(int *f, char c)
{
	int tmp_f;
	int count = 0;

	tmp_f = *f;
	if (tmp_f == 2 && c == '%')
	{
		_putchar('%');
		tmp_f = 0;
		count = 1;
	}
	return (count);
}
/**
 * call_function - call function man
 * @c: character parameter
 * @l: list of arguments
 * Return: num of characters
 */
int call_function(char c, va_list l)
{
	int count = 0;

	count = function_man(c, l);
	return (count);
}
