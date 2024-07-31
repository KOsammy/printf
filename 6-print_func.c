#include <stdarg.h>
#include <stdio.h>
#include "main.h"


	/**
	 * print_pointer_format - prints the address of a pointer
	 * @args: argument
	 * return: count
	 */int print_pointer_format(va_list args)
{
	void *ptr = va_arg(args, void *);
	unsigned long num = (unsigned long)ptr;
	int count = 0;
	char buffer[20];
	int i = 0;
	int j;

	if (ptr == NULL)
	{
		printf("(nil)");
		return (5);
	}

	while (num > 0)
	{
		int remainder = num % 16;

		if (remainder < 10)
			buffer[i++] = remainder + '0';
		else
			buffer[i++] = (remainder - 10) + 'a';
		num = num / 16;
	}

	_putchar('0');
	_putchar('x');
	count += 2;

	for (j = i - 1; j >= 0; j--)
	{
		_putchar(buffer[j]);
		count++;
	}

	return (count);
}
