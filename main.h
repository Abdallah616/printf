#ifndef _PRINTF_H
#define _PRINTF_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>

#define LOCAL_BUFFER 1024

int _printf(const char *format, ...);
int print_int(int num);
int print_char(char c);
int print_str(const char *str);
int print_percent(va_list arg);
int print_uint(unsigned int num);
int print_octal(unsigned int num);
int get_specifier(char specifier, va_list args);
int print_hex_lower(unsigned int u_num);
int print_hex_upper(unsigned int u_num);
int print_binary(unsigned int num, int numbits);
int get2_specifier(char specifier, va_list args);
int print_rot13(char *str);
int print_reverse(char *str);
int print_address(void *ptr);
int _putchar(char c);
int print_custom_str(char *sptr);
char *convert_to_binary(unsigned int unum);

#endif
