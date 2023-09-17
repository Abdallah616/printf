#include "main.h"
/**
 * print_hex_lower - prints a num in hexadecimal lowercase
 *
 * @u_num: num to be printed
 *
 * Return: length of printed num
*/
int print_hex_lower(unsigned int u_num)
{
	int num_len = 0, i, remainder;
	unsigned int temp = u_num;
	char *hex_str;

	if (u_num == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	while (temp != 0)
	{
		temp /= 16;
		num_len++;
	}
	hex_str = (char *)malloc(sizeof(unsigned int));
	if (hex_str == NULL)
		exit(0);
	temp = u_num;
	for (i = num_len - 1; i >= 0; i--)
	{
		remainder = temp % 16;
		if (remainder < 10)
			hex_str[i] = remainder + '0';
		else
			hex_str[i] = remainder - 10 + 'a';
		temp /= 16;
	}
	write(1, hex_str, num_len);
	return (num_len);
}
/**
 * print_hex_upper - prints a num in hexadecimal uppercase
 *
 * @u_num: num to be printed
 *
 * Return: length of printed num
*/
int print_hex_upper(unsigned int u_num)
{
	int num_len = 0, i, remainder;
	unsigned int temp = u_num;
	char *hex_str;

	if (u_num == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	while (temp != 0)
	{
		temp /= 16;
		num_len++;
	}
	hex_str = (char *)malloc(sizeof(unsigned int));
	if (hex_str == NULL)
		exit(0);
	temp = u_num;
	for (i = num_len - 1; i >= 0; i--)
	{
		remainder = temp % 16;
		if (remainder < 10)
			hex_str[i] = remainder + '0';
		else
		hex_str[i] = remainder - 10 + 'A';
		temp /= 16;
	}
	write(1, hex_str, num_len);
	return (num_len);
}
