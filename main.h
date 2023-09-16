#ifndef _PRINTF_H
#define _PRINTF_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>

int _printf(const char *format, ...);
int print_int(int num);
int print_char(char c);
int print_str(const char *str);
int print_percent(void);
int print_uint(unsigned int num);
int print_octal(unsigned int num);
int get_specifier(char specifier, va_list args);

#endif
