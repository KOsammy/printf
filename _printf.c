#include <stdarg.h>
#include "main.h"


/**
 * print_char_format - handles the %c format spec
 * @args: va_list containing the character to print
 *
 * Return: Number of characters printed
 */
int print_char_format(va_list args)
{
	print_char(va_arg(args, int));
	return (1);
}

/**
 * print_string_format - handles the %s format
 * @args: va_list containing the string to print
 *
 * Return: Number of characters printed
 */
int print_string_format(va_list args)
{
	char *str = va_arg(args, char *);
	int count = 0;

	if (str == NULL)
	{
		*str = "(nil)";
		return (5);
	}
	while (*str)
	{
		print_char(*str++);
		count++;
	}
	return (count);
}


/**
 * print_int_format - This handels the %d and %i formats
 * @args: va_list contains the integer to print
 *
 * Return: Number of characters to be printed
 */

int print_int_format(va_list args)
{
	int num = va_arg(args, int);
	int count = 0;
	char buffer[12];
	char *ptr = buffer;
	unsigned int n;

	if (num < 0)
	{
		print_char('-');
		count++;
		n = -num;
	}
	else
		n = num;

	if (n == 0)
	{
		print_char('0');
		return (1);
	}

	while (n)
	{
		*ptr++ = (n % 10) + '0';
		n /= 10;
	}
	ptr--;

	while (ptr >= buffer)
	{
		print_char(*ptr--);
		count++;
	}

	return (count);
}

/**
 * handle_format - processes the format specifier
 * @format: format specifier
 * @args: va_list containing the arguments
 *
 * Return: Number of characters printed
 */


int handle_format(char format, va_list args)
{
	int count = 0;

	if (format == 'c')
		count = print_char_format(args);
	else if (format == 's')
		count = print_string_format(args);
	else if (format == 'd' || format == 'i')
		count = print_int_format(args);
	else if (format == 'b')
		count = print_binary_format(args);
	else if (format == 'x')
		count = print_hex_format(args);
	else if (format == 'X')
		count = print_uppercase_hex_format(args);
	else if (format == 'u')
		count = print_unsigned_int_format(args);
	else if (format == 'o')
		count = print_octal_format(args);
	else if (format == 'p')
		count = print_pointer_format(args);
	else if (format == '%')
	{
		print_char('%');
		count = 1;
	}
	else
	{
		print_char('%');
		print_char(format);
		count = 2;
	}
	return (count);
}

/**
 * _printf - produces output according to a format
 * @format: a character string composed of zero or more directives
 *
 * Return: the number of characters printed (excluding the null byte)
 */
int _printf(const char *format, ...)
{
	va_list args;
	int i = 0, count = 0;

	va_start(args, format);
	if (format == NULL)
		return (-1);

	while (format && format[i])
	{
		if (format[i] == '%')
		{
			i++;
			count += handle_format(format[i], args);
		}
		else
		{
			print_char(format[i]);
			count++;
		}
		i++;
	}

	va_end(args);
	return (count);
}

