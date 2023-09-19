#include "main.h"

/**
 * print_str - Print a string
 * @str: The string to print
 *
 * Return: The number of characters printed
 */
int print_str(char *str)
{
	int len, i;
	char *buffer;

	len = _strlen(str);
	buffer = (char *)malloc(len * sizeof(char) + 1);
	if (buffer == NULL)
		exit(0);
	for (i = 0; str[i] != '\0'; i++)
	{
		buffer[i] = str[i];
	}
	buffer[i] = '\0';
	write(1, buffer, len);
	return (len);
}
