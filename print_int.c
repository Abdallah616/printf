#include "main.h"
/**
 * print_int - prints an integer
 *
 * @num: integer to be printed
 *
 * Return: length of num
*/
int print_int(int num)
{
	int temp = num, num_len = 0, i;
	char *num_str;

	if (num == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	if (num < 0)
	{
		write(1, "-", 1);
		num_len++;
		temp = -num;
	}
	while (temp != 0)
	{
		temp /= 10;
		num_len++;
	}
	num_str = (char *)malloc(sizeof(int));
	if (num_str == NULL)
		exit(0);
	temp = num;
	if (num < 0)
		temp = -num;
	for (i = num_len - 2; i >= 0; i--)
	{
		num_str[i] = temp % 10 + '0';
		temp /= 10;
	}
	write(1, num_str, num_len);
	return (num_len);
}
