#include <stdarg.h>
#include <stdio.h>

/******===HANDLER FUNCTION (%b)===******/

	/**
	* print_binary - Print an unsigned integer in binary format
	* @args: list of argument
	* return: count
	*/int print_binary_format(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	int count = 0;
	int binary[32];
	int i = 0;
	int j;

	if (num == 0)
	{
		putchar('0');
		return (1);
	}

	while (num > 0)
	{
		binary[i] = num % 2;
		num = num / 2;
		i++;
	}

	for (j = i - 1; j >= 0; j--)
	{
		putchar(binary[j] + '0');
		count++;
	}

	return (count);
}

