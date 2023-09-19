#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)++
{++
	int len, len3;++
	int len2;++
	unsigned int ui;++
    void *addr;++
++
    addr = (void *)0x7ffe637541f0;++
    _printf("Address:[%p]\n", addr);++
    printf("Address:[%p]\n", addr);++
	len = _printf("Let's try to printf a simple sentence.\n");++
	len2 = printf("Let's try to printf a simple sentence.\n");++
	ui = (unsigned int)INT_MAX + 1024;++
	_printf("Length:[%d, %i]\n", len, len);++
	printf("Length:[%d, %i]\n", len2, len2);++
	_printf("Negative:[%d]\n", -762534);++
	printf("Negative:[%d]\n", -762534);++
	_printf("Unsigned:[%u]\n", ui);++
	printf("Unsigned:[%u]\n", ui);++
	_printf("Unsigned octal:[%o]\n", ui);++
	printf("Unsigned octal:[%o]\n", ui);++
	_printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);++
	printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);++
	_printf("Character:[%c]\n", ' ');++
	printf("Character:[%c]\n", 'H');++
	_printf("String:[%s]\n", NULL);++
	printf("String:[%s]\n", "I am a string !");++
	len3 = _printf("%b\n", 98);++
	_printf("Len:[%d]\n", len3);++
   _printf("%b\n", -98);
	len = _printf("Percent:[%%]\n");
	len2 = printf("Percent:[%%]\n");
	_printf("Len:[%d]\n", len);
	printf("Len:[%d]\n", len2);
	_printf("Unknown:[%w]\n");
	_printf("%R\n", "abcdef");
	_printf("%r\n", "issem");
	_printf("%S\n", "Best\nSchool");
	_printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
	return (0);
}
