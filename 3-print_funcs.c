#include <stdarg.h>
#include "main.h"

/***===== FORMAT SPECIFIERS FUNCTIONS (%u, %o, %x & %X) ======***/

	/**
	* print_unsigned - prints unsigned integer
	* @arg: takes an unsigned integer as argument
	* return: count
	*/int print_unsigned_int_format(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	int count = 0;
	char buffer[20];
	int i = 0;
	int j;

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}

	while (num > 0)
	{
		buffer[i++] = (num % 10) + '0';
		num = num / 10;
	}

	for (j = i - 1; j >= 0; j--)
	{
		_putchar(buffer[j]);
		count++;
	}

	return (count);
}


	/**
	* print_octal - prints integer in octal format
	* @arg: argument
	* return: count
	*/int print_octal_format(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	int count = 0;
	char buffer[20];
	int i = 0;
	int j;

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}

	while (num > 0)
	{
		buffer[i++] = (num % 8) + '0';
		num = num / 8;
	}

	for (j = i - 1; j >= 0; j--)
	{
		_putchar(buffer[j]);
		count++;
	}

	return (count);
}


	/**
	* print_lowerhexadecimal - prints lowercase hexadecimal
	* @n: argument
	* return: nothing
	*/int print_hex_format(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	int count = 0;
	char buffer[20];
	int i = 0;
	int remainder;
	int j;

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}

	while (num > 0)
	{
		remainder = num % 16;
		if (remainder < 10)
			buffer[i++] = remainder + '0';
		else
			buffer[i++] = (remainder - 10) + 'a';
		num = num / 16;
	}

	for (j = i - 1; j >= 0; j--)
	{
		_putchar(buffer[j]);
		count++;
	}

	return (count);
}


	/**
	* print_uppererhexadecimal - prints uppercase hexadecimal
	* @n: argument
	* return: nothing
	*/int print_uppercase_hex_format(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	int count = 0;
	char buffer[20];
	int i = 0;
	int remainder;
	int j;

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}

	while (num > 0)
	{
		remainder = num % 16;
		if (remainder < 10)
			buffer[i++] = remainder + '0';
		else
			buffer[i++] = (remainder - 10) + 'A';
		num = num / 16;
	}

	for (j = i - 1; j >= 0; j--)
	{
		_putchar(buffer[j]);
		count++;
	}

	return (count);
}
