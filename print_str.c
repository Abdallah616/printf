#include "main.h"

/**
 * print_str - Print a string
 * @str: The string to print
 *
 * Return: The number of characters printed
 */
int print_str(char *str)
{
	int len;

	len = _strlen(str);
	write(1, str, len);
	return (len);
}
