#include "main.h"

/**
 * print_percent - Print a percent sign
 *
 * @arg: list of arguments
 *
 * Return: The number of characters printed
 */
int print_percent(va_list arg)
{
	if (va_arg(arg, int))
		_putchar(37);
	return (1);
}
