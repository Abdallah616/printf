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
	int len = 0, i, temp, firstnonzero = 0;
	char *buffer = (char *)malloc(LOCAL_BUFFER);

	temp = num;
	if (num == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	if (num < 0)
	{
		len++;
		temp = -num;
	}
	while (temp != 0)
	{
		temp /= 2;
		len++;
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
	for (i = 0; i < len; i++)
	{
		if (buffer[i] != '0')
		{
			firstnonzero = i;
			break;
		}
	}
	write(1, buffer + firstnonzero, len - firstnonzero);
	return (len - firstnonzero);
}
