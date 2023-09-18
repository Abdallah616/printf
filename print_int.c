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
	int i, k = 0, numlength = 0;
	unsigned int pos_n = 0;
	int mul = 1;

	if (num == 0)
	{
		_putchar(pos_n + '0');
		return (1);
	}
	else if (num < 0)
	{
		_putchar('-');
		pos_n = -num;
		k++;
	}
	else
	{
		pos_n = num;
	}
	while (pos_n != 0)
	{
		pos_n /= 10;
		numlength++;
	}
	pos_n = (num > 0) ? num : -num;
	i = numlength;
	while (i != 1)
	{
		mul = mul * 10;
		i--;
	}
	_putchar((pos_n / mul) + '0');
	while (mul != 1)
	{
		mul = mul / 10;
		_putchar(((pos_n / mul) % 10) + '0');
	}
	k += numlength;
	return (k);
}
