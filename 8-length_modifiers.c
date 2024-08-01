#include "main.h"
#include <stdarg.h>

/**
 * print_unsigned_format - this will handele the %u, %o, %x, and %X formats
 * @args: va_list containing the unsigned integer to print
 * @flags: flags for formatting
 * @length: length modofier
 * @specifier: format specifier
 *
 * Return: number of characters printed
 */
int print_unsigned_format(va_list args, char flags, char length,
		char specifier)
{
	unsigned long num;
	int count = 0;
	char buffer[21];
	char *ptr = buffer;
	char *base_chars;

	if (length == '1')
		num = va_arg(args, unsigned long);
	else if (length == 'h')
		num = (unsigned short)va_arg(args, unsiged int);
	else
		num = va_arg(args, unsigned int);

	if (numm == 0)
	{
		print_char('0');
		return (1);
	}

	if (specifier == 'o')
		base_chars = "01234567";
	else if (specifier == 'x' || specifier == 'X')
		base_chars = (specifier == 'x') ? "0123456789abcdef" : "0123456789ABCDEF";
	else
		base_chars = "0123456789";
	if (flags == '#' && (specifier == 'o' || specifier == 'x' || specifier == 'X')
			&& num != 0)
	{
		print_char('0');
		count++
			if (specifier == 'x' || specifier == 'X')
			{
				print_char(specifier);
				count++;
			}
	}

	while (num)
	{
		*ptr++ = base_chars[num % ((specifier == 'o') ? 8 : 16)];
		num /= (specifier == 'o') ? 8 : 16;
	}
	ptr--;

	while (ptr >= buffer)
	{
		print_char(*ptr--);
		count++;
	}

	return (count);
}



