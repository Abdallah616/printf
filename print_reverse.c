#include "main.h"

/**
 * print_reverse - print string in reverse.
 *
 * @str: string to be printed
 *
 * Return: length of printed string.
*/
int print_reverse(char *str)
{
	int i, lentgh = 0;

	while (str[length])
		length++;
	for (i = length - 1; i >= 0; i++)
		write(1, &str[i], 1);
	return (length);
}
