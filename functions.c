#include "main.h"
#include <unistd.h>
#include <stdlib.h>
/**
* _putchar - writes the character to output
* @c: the character to print
* Return: 1 on success
* on error returns -1
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
/**
* _puts - prints string
* @str: pointer char
*
* Return: nothing
*
*/


void _puts(char *str)
{
	int i;

	for (i = 0; i < _strlen(str); i++)
	{
		_putchar(str[i]);
	}
}
/**
 * _strlen - reset number
 * @s: pointer char
 * Return: int length
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s++)
	{
		len++;
	}
	return (len);
}
