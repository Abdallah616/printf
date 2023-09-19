#include "main.h"
/**
 * convert_to_binary - converts int to binary.
 *
 * @unum: num to convert.
 *
 * Return: converted num
*/
char *convert_to_binary(unsigned int unum)
{
	int num_len = 0, i;
	char *binary;
	unsigned int temp = unum;

	if (unum == 0)
	{
		binary = (char *)malloc(2);
		if (binary == NULL)
			return (NULL);
		binary[0] = '0';
		binary[1] = '\0';
		return (binary);
	}
	while (temp != 0)
	{
		temp /= 2;
		num_len++;
	}
	binary = (char *)malloc(num_len + 1);
	if (binary == NULL)
		return (NULL);
	temp = unum;
	binary[num_len] = '\0';
	for (i = num_len - 1; i >= 0; i--)
	{
		binary[i] = (temp % 2) + '0';
		temp /= 2;
	}
	return (binary);
}
