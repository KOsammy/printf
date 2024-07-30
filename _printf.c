#include <stdarg.h>
#include "main.h"

/**
 * print_char_format - handles the %c format
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
		str = "(null)";
	while (*str)
	{
		print_char(*str++);
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

