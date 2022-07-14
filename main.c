#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
* main - Entry point
*
* Return: Always 0
*/
int main(void)
{
	int len;
	int len2;
	unsigned int ui;
	void *addr;

	len = _printf("Let's try to printf a simple sentence.\n");
	len2 = printf("Let's try to printf a simple sentence.\n");
	ui = (unsigned int)INT_MAX + 1024;
	addr = (void *)0x7ffe637541f0;
	_printf("Length:[%d, %i]\n", len, len);
	printf("Length:[%d, %i]\n", len2, len2);
	_printf("Negative:[%d]\n", -762534);
	printf("Negative:[%d]\n", -762534);
	_printf("Unsigned:[%u]\n", ui);
	printf("Unsigned:[%u]\n", ui);
	_printf("Unsigned octal:[%o]\n", ui);
	printf("Unsigned octal:[%o]\n", ui);
	_printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
	printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
	_printf("Character:[%c]\n", 'H');
	printf("Character:[%c]\n", 'H');
	_printf("String:[%s]\n", "I am a string !");
	printf("String:[%s]\n", "I am a string !");
	_printf("Address:[%p]\n", addr);
	printf("Address:[%p]\n", addr);
	len = _printf("Percent:[%%]\n");
	len2 = printf("Percent:[%%]\n");
	_printf("Len:[%d]\n", len);
	printf("Len:[%d]\n", len2);
	_printf("Unknown:[%r]\n");
	printf("Unknown:[%r]\n");
	return (0);
}
gcc - Wall - Wextra - Werror - pedantic - std = gnu89 - Wno - format  * .c
. / printf
Let's try to printf a simple sentence.
Let's try to printf a simple sentence.
Length :[39d, 39i]
Length :[39, 39]
Negative :[-762534d]
Negative :[-762534]
Unsigned :[2147484671u]
Unsigned :[2147484671]
Unsigned octal :[20000001777o]
Unsigned octal :[20000001777]
Unsigned hexadecimal :[800003ff, 800003FFx]
Unsigned hexadecimal :[800003ff, 800003FF]
Character :[Hc]
Character :[H]
String :[I am a string !s]
String :[I am a string !]
Address :[0x7ffe637541f0p]
Address :[0x7ffe637541f0]
Percent :[%%]
Percent :[%]
Len :[13d]
Len :[12]
Unknown :[
]FF300008, ff300
] 21[: neLr]
Unknown :[%r]
