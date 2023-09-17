#include "main.h"

/**
 * get_specifier - Handle conversion specifier
 *
 * @specifier: The conversion specifier character
 * @args: The va_list of arguments
 * Return: Always The number of characters printed
 */
int get_specifier(char specifier, va_list args)
{
	int printed_chars = 0;
	char *str;
	int num;
	unsigned int unum;

	switch (specifier)
	{
		case 'c':
			printed_chars += print_char(va_arg(args, int));
			break;
		case 's':
			str = va_arg(args, char *);
			if (!str)
				str = "(null)";
			printed_chars += print_str(str);
			break;
		case '%':
			printed_chars += print_percent();
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
		case 'b':
			unum = va_arg(args, unsigned int);
			printed_chars += print_binary(unum);
			break;
		default:
			break;
	}

	return (printed_chars);
}
