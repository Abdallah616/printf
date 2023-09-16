#include "main.h"

int print_unsigned(unsigned int num)
{
	int num_len = 0, i;
	unsigned int temp = num;
	char *num_str;

	if (num == 0)
    {
        write(1, "0", 1);
        return 1;
    }

    while (temp != 0)
    {
        temp /= 10;
        num_len++;
    }
    num_str = (char *)malloc(sizeof(unsigned int));
    if (num_str == NULL)
        exit(0);
    temp = num;
    for (i = num_len - 1; i >= 0; i--)
    {
        num_str[i] = temp % 10 + '0';
        temp /= 10;
    }

    write(1, num_str, num_len);
    return num_len;
}
