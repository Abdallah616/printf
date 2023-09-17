#include "main.h"
/**
 * _printf - prints anything
 * @format: the format string
 *
 * Return: number of bytes printed
 */
int _printf(const char *format, ...)
{
	va_list args;
	int i, printed_chars = 0;

	va_start(args, format);
	if (!format)
		return (-1);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == '\0')
				return (-1);
			printed_chars += get_specifier(format[i], args);
			if (printed_chars == 0)
				printed_chars += get_specifier2(format[i], args);
		}
		else
		{
			write(1, &format[i], 1);
			printed_chars++;
		}
	}
	va_end(args);
	return (printed_chars);
}
