#include "main.h"

/**
 * print_binary - print num in binary
 *
 * @num: num to be printed
 *
 * Return: length of printed num
*/
int print_binary(int num);
int print_binary(int num)
{
	int len = 0, i, printed_chars= 0;
	char *buffer = (char *)malloc(LOCAL_BUFFER);
	unsigned int temp;

	temp = num;
	if (num == 0)
		buffer[len++] = '0';
	else
	{
		while (temp != 0)
		{
			buffer[len++] = (temp % 2)+ '0';
			temp /= 2;
		}
	}
	temp = num;
	if (num < 0)
	{
		temp = -num;
		for (i = len - 1; i > 0; i--)
		{
			buffer[i] = (temp % 2) + '0';
			temp /= 2;
		}
	buffer[i] = '-';
	}
	else
	{
		for (i = len - 1; i >= 0; i--)
		{
			buffer[i] = (temp % 2) + '0';
			temp /= 2;
		}
	}
	for (i = len - 1; i >= 0; i--)
	{
		write(1, &buffer[i], 1);
		printed_chars++;
	}
	return (printed_chars);
}
