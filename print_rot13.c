#include "main.h"
/**
 * print_rot13 - print string in rot13.
 *
 * @str: string to be printed.
 *
 * Return: length of printed string.
*/
int print_rot13(char *str)
{
	int i = 0;
	char c;

	while (str[i])
	{
		c = str[i];
		if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		{
			if ((c >= 'A' && c <= 'M') || (c >= 'a' && c <= 'm'))
				c += 13;
			else
				c -= 13;
		}
		write(1, &c, 1);
		i++;
	}
	return (i);
}
