#include <stdio.h>
#include <stdlib.h>

/******===HANDLER FUNCTION (%b)===******/

/**
 * print_binary - Print an unsigned integer in binary format
 * @i: The unsigned integer to print
 * return: nothing
*/void print_binary(unsigned int i)
{
	char buffer[32];
	int index = 0;
	int j;

	if (i == 0)
	{
		_putchar('0');
		return;
	}

	while (i > 0)
	{
		buffer[index++] = (i % 2) + '0';
		i /= 2;
	}

	for (j = index - 1; j >= 0; j--)
	{
		_putchar(buffer[j]);
	}
}
