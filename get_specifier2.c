#include "main.h"
/**
 * get_specifier - Handle conversion specifier
 *
 * @specifier: The conversion specifier character
 * @args: The va_list of arguments
 * Return: Always The number of characters printed
 */
int get2_specifier(char specifier, va_list args)
{
	int printed_chars = 0;
	unsigned int unum;

	switch (specifier)
	{
		case '%':
			printed_chars += print_percent();
			break;
		case 'b':
			unum = va_arg(args, unsigned int);
			printed_chars += print_binary(unum);
			break;
		default:
			break;
	}
	return (printed_chars);
}
