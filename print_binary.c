#include "main.h"

/**
 * print_binary - print num in binary
 *
 * @num: num to be printed
 * @numbits: num of bits in buffer
 *
 * Return: length of printed num
*/
int print_binary(unsigned int num, int numbits)
{
	int i, printed_chars = 0, firstnonzero = 0;
	char *buffer = (char *)malloc(numbits + 1);

	if (!buffer)
		exit(0);
	buffer[numbits] = '\0';
	for (i = numbits - 1; i >= 0; i--)
	{
		buffer[i] = (num & 1) ? '1' : '0';
		printed_chars++;
		num >>= 1;
	}
	for (i = 0; i < printed_chars; i++)
	{
		if (buffer[i] != '0')
		{
			firstnonzero = i;
			break;
		}
	}
	write(1, buffer + firstnonzero, numbits - firstnonzero);
	return (printed_chars - firstnonzero);
}
