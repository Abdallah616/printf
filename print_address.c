#include "main.h"
/**
 * print_address - prints address of a pointer.
 *
 * @ptr: pointer.
 *
 * Return: length of printed address.
*/
int print_address(void *ptr)
{
	unsigned long int address = (unsigned long int)ptr;
	int num_len = 0, i, remainder;
	unsigned long int temp = address;
	char *hex_str = (char *)malloc(LOCAL_BUFFER);
	
	if (hex_str == NULL)
		exit(0);
	if (address == 0)
	{
		write(1, "(nil)", 5);
		return (5);
	}
	while (temp != 0)
	{
		temp /= 16;
		num_len++;
	}
	temp = address;
	for (i = num_len - 1; i >= 0; i--)
	{
		remainder = temp % 16;
		if (remainder < 10)
			hex_str[i] = remainder + '0';
		else
			hex_str[i] = remainder - 10 + 'a';
		temp /= 16;
	}
	write(1, "0x", 2);
	write(1, hex_str, num_len);
	return (2 + num_len);
}
