#include "main.h"

/**
 * print_char - Print a character
 * @c: char to be printed.
 *
 * Return: The number of characters printed
 */
int print_char(char c)
{
	if (c >= 32 && c < 127)
	{
		_putchar(c);
		return (1);
	}
	else
		return (0);
}
