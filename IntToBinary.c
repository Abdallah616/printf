#include "main.h"
/**
 * IntToBinary - converts int to binary
 *
 * @num: int to be converted.
 * @binary: buffer to store convertd num.
 *
 * Return: void
*/
void IntToBinary(unsigned int num, char *bin)
{
	int j;

	for (j = 31; j >= 0; j--)
	{
		bin[j] = (num & 1) ? '1' : '0' ;
		num >>= 1;
	}
	bin[32] = '\0';
}
