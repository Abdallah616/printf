#include "main.h"

/**
 * print_str - Print a string
 * @str: The string to print
 *
 * Return: The number of characters printed
 */
int print_str(const char *str)
{
	int i = 0;

	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}

	return (i);
}
