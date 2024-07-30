#include <stdio.h>
#include "main.h"


/***======HELPER FUNCTION======***/
/**
 * print_digits - prints digits
 * @n: argument
 * return: nothing
 */void print_digits(unsigned int n)
{
	if (n == 0)
		return;

	print_digits(n / 10);
	_putchar((n % 10) + '0');
}

/***=====FORMAT SPECIFIERS FUNCTIONS======***/

/**
 * print_unsigned - prints unsigned integer
 * @arg: takes an unsigned integer as argument
 * return: nothing
 */void print_unsigned(unsigned int n)
{
	if (n == 0)
		return;
	else
		print_digits(n);
}


/**
 * print_octal - prints integer in octal format
 * @n: argument
 * return: nothing
 */void print_octal(unsigned int n)
{
	if (n / 8 != 0)
	{
		print_octal(n / 8);
	}
	_putchar('0'+ (n % 8));
}


/**
 * print_lowerhexadecimal - prints lowercase hexadecimal
 * @n: argument
 * return: nothing
*/void print_lowerhexadecimal(unsigned int n)
{
	int leftover = n % 16;

	if (n / 16 != 0)
	{
		print_lowerhexadecimal(n / 16);
	}

	if (leftover < 10)
	{
		_putchar('0' + leftover);
	}
	else
	{
		_putchar('a' + (leftover - 10));
	}
}

/**
 * print_upperhexadecimal - prints hexadecimal in uppercase
 * @n: argument
 * return: nothing
*/void print_upperhexadecimal(unsigned int n)
{
	int leftover = n % 16;

	if (n / 16 != 0)
	{
		print_upperhexadecimal(n / 16);
	}

	if (leftover < 10)
	{
		_putchar('0' + leftover);
	}
	else
	{
		_putchar('A' + (leftover - 10));
	}
}
