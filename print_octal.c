#include "main.h"
/**
 * print_octal - prints num in octal.
 *
 * @num: num to be printed.
 *
 * Return: length of printed num.
*/
int print_octal(unsigned int num)
{
	int num_len = 0, i;
	unsigned int temp = num;
	char *num_str;

	if (num == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	while (temp != 0)
	{
		temp /= 8;
		num_len++;
	}
	num_str = (char *)malloc(sizeof(unsigned int));
	if (num_str == NULL)
		exit(0);
	temp = num;
	for (i = num_len - 1; i >= 0; i--)
	{
		num_str[i] = (temp % 8) + '0';
		temp /= 8;
	}
	write(1, num_str, num_len);
	return (num_len);
}
