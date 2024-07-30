#include <stdio.h>
#include <stdlib.h>

/******===HANDLER FUNCTION (%b)===******/

/**
 * print_binary - Print an unsigned integer in binary format
 * @i: The unsigned integer to print
 * return: nothing
*/void print_binary(unsigned int i)
{
	if (i == 0)
	{
		putchar('0');
		return;
	}

	char buffer[32];
	int index = 0;

	while (i > 0)
	{
		buffer[index++] = (i % 2) + '0';
		i /= 2;
	}

	for (int j = index - 1; j >= 0; j--)
	{
		putchar(buffer[j]);
	}
}
