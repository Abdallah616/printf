#include "main.h"

/**
 * print_char - Print a character
 * @c: The character to print
 *
 * Return: The number of characters printed
 */
int print_char(va_list ptr)
{
	char ch = va_arg(ptr, int);
	if (ch == '\0')
		return (0);
	_putchar(ch);
	return (1);
}
