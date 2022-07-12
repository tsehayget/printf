#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>

int _putchar(char c);
void _puts(char *str);
int _strlen(char *s);
int _printf(const char *format, ...);
int function_man(char c, va_list l);
int loop(va_list l, const char *string);
int check_percent(int *f, char c);
int call_function(char c, va_list l);
int _switch(char c, va_list l);


#endif
