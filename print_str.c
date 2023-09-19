#include "main.h"

/**
 * print_str - Print a string
 * @arg: list of arguments passed.
 *
 * Return: The number of characters printed
 */
int print_str(va_list arg)
{
	int i = 0;
	char *str, *p = "(null)";

	str = va_arg(arg, char *);
	if (str == NULL)
	{
		write(1, p, 6);
		return (6);
	}
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	return (i);
}
/**
 * print_str1 - Print a string
 * @str: The string to print
 *
 * Return: The number of characters printed
 */
int print_str1(char *str)
{
	int len, i;
	char *buffer;

	len = _strlen(str);
	buffer = (char *)malloc(len * sizeof(char) + 1);
	if (!buffer)
		exit(0);
	for (i = 0; str[i] != '\0'; i++)
	{
		buffer[i] = str[i];
	}
	buffer[i] = '\0';
	write(1, buffer, len);
	return (len);
}
