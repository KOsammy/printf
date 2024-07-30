#include <stdio.h>
#include <stdlib.h>

/******===HANDLER FUNCTONS (%d and %i)===******/

/**
 * print_int - prints an integer
 * @i: integer argument
 * return: nothing
*/void print_integer(int i)
{
	if (i == 0)
	{
		putchar('0');
		return;
	}
	char buffer[12];
	int index = 0;
	int is_negative = 0;

	if (i < 0)
	{
		is_negative = 1;
		i = -i;
	}

	while (i > 0)
	{
		buffer[index++] = (i % 10) + '0';
		i /= 10;
	}

	if (is_negative)
	{
		buffer[index++] = '-';
	}

	for (int j = index - 1; j >= 0; j--)
	{
		putchar(buffer[j]);
	}
}
