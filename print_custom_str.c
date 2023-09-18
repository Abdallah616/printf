#include "main.h"
/**
 * print_custom_str - prints the string in a custom way.
 *
 * @sptr: string to print.
 *
 * Return: length of printed string.
*/
int print_custom_str(char *sptr)
{
	int i = 0, printed_chars = 0;
	char *hex_buff = (char *)malloc(4 * sizeof(char));

	while (sptr[i])
	{
		if (sptr[i] < 32 || sptr[i] >= 127)
		{
			hex_buff[0] = '\\';
			hex_buff[1] = 'x';
			hex_buff[2] = (sptr[i] / 16) + ((sptr[i] / 16 <= 9) ? '0' : 'A' - 10);
			hex_buff[3] = (sptr[i] % 16) + ((sptr[i] % 16 <= 9) ? '0' : 'A' - 10);
			write(1, hex_buff, 4);
		}
		else
		{
			_putchar(sptr[i]);
			printed_chars++;
		}
		i++;
	}
	return (printed_chars);
}
