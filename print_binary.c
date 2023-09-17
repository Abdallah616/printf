#include "main.h"

/**
 * print_binary - print num in binary
 *
 * @num: num to be printed
 *
 * Return: length of printed num
*/
int print_binary(unsigned int num)
{
	int num_len = 0, i, leadingzeros = 0;
	unsigned int temp = num;
	char *bin_str;

	if (num == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	while (temp != 0)
	{
		temp /= 2;
		num_len++;
	}
	bin_str = (char *)malloc(sizeof(unsigned int));
	if (bin_str == NULL)
		exit(0);
	temp = num;
	for (i = num_len - 1; i >= 0; i--)
	{
		bin_str[i] = (temp % 2) + '0';
		temp /= 2;
	}
	for (i = 0; i < num_len; i++)
	{
		if (bin_str[i] == '0')
			leadingzeros++;
		else
			break;
	}
	write(1, bin_str + leadingzeros, num_len - leadingzeros);
	return (num_len - leadingzeros);
}
