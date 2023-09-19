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
	int printed_chars = 0, numbits = sizeof(int) * 8;
	unsigned int unum;
	char *str, per = '%';
	void *ptr;

	switch (specifier)
	{
		case 'c':
			printed_chars += print_char(va_arg(args, int));
			break;
		case '%':
			printed_chars += print_percent();
			break;
		case 'b':
			unum = va_arg(args, unsigned int);
			printed_chars += print_binary(unum, numbits);
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
		case 'p':
			ptr = va_arg(args, void *);
			printed_chars += print_address(ptr);
			break;
		default:
			write(1, &per, 1);
			write(1, &specifier, 1);
			printed_chars++;
			break;
	}
	return (printed_chars);
}
