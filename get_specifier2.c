#include "main.h"
/**
 * get2_specifier - Handle conversion specifier
 *
 * @specifier: The conversion specifier character
 * @args: The va_list of arguments
 * Return: Always The number of characters printed
 */
int get2_specifier(char specifier, va_list args)
{
	int printed_chars = 0;
	unsigned int unum;
	char *str, per = '%';

	switch (specifier)
	{
		case '%':
			printed_chars += print_percent();
			break;
		case 'b':
			unum = va_arg(args, unsigned int);
			printed_chars += print_binary(unum);
			break;
		case 'R':
			str = va_arg(args, char *);
			if (!str)
				str = "";
			printed_chars += print_rot13(str);
			break;
		case 'r':
			str = va_arg(args, char *);
			if (!str)
				str = "";
			printed_chars += print_reverse(str);
			break;

		default:
			write(1, &per, 1);
			write(1, &specifier, 1);
			printed_chars++;
			break;
	}
	return (printed_chars);
}
