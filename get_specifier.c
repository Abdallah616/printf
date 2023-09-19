#include "main.h"

/**
 * get_specifier - Handle conversion specifier
 *
 * @specifier: The conversion specifier character
 * @args: The va_list of arguments
 * Return: Always The number of characters printed
 */
int get_specifier(char specifier, va_list args);
int get_specifier(char specifier, va_list args)
{
	int printed_chars = 0;
	char *str;
	int num;
	unsigned int unum;

	switch (specifier)
	{
		case 'S':
			str = va_arg(args, char *);
			printed_chars += print_custom_str(str);
			break;
		case 's':
			printed_chars += print_str(args);
			break;
		case 'd':
		case 'i':
			num = va_arg(args, int);
			printed_chars += print_int(num);
			break;
		case 'u':
			unum = va_arg(args, unsigned int);
			printed_chars += print_uint(unum);
			break;
		case 'o':
			unum = va_arg(args, unsigned int);
			printed_chars += print_octal(unum);
			break;
		case 'x':
			unum = va_arg(args, unsigned int);
			printed_chars += print_hex_lower(unum);
			break;
		case 'X':
			unum = va_arg(args, unsigned int);
			printed_chars += print_hex_upper(unum);
			break;
		default:
			printed_chars += get2_specifier(specifier, args);
			break;
	}
	return (printed_chars);
}
