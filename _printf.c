#include <stdlib.h>
#include <stdio.h>
#include "main.h"
#include <unistd.h>
#include <stdarg.h>

/**
 * print_char - This handles the %c format
 * @args: va_list contains the character to print
 *
 * Return: Number of characters printed
 */
int print_char(va_list args)
{
	return (_putchar(va_arg(args, int)));
}

/**
 * print_string -This handles the %s format
 * @args: va_list containing the string to print
 *
 * Return: Number of characters printed
 */
int print_string(va_list args)
{
	char *str = va_arg(args, char *);
	int count = 0;

	if (str == NULL)
		str = "(null)";
	while (*str)
		count += _putchar(*str++);
	return (count);
}


/**
 * _printf - This gives an output accroding to the format
 * @format: A character string with zero or more directives
 *
 * Return: the number of characters printed (excludung the null byte)
 */
<<<<<<< HEAD
int _printf(const char *format, ...)
{
	va_list args;
	int i = 0, count = 0;
=======
int _printf(const char *format, ...) {
    va_list args;
    va_start(args, format);
    int count = 0;
>>>>>>> refs/remotes/origin/main

    while (*format) {
        if (*format == '%') {
            format++;
            switch (*format) {
                case 'c': {
                    char c = (char) va_arg(args, int);
                    putchar(c);
                    count++;
                    break;
                }
                case 's': {
                    char *s = va_arg(args, char *);
                    while (*s) {
                        putchar(*s);
                        s++;
                        count++;
                    }
                    break;
                }
                case '%': {
                    putchar('%');
                    count++;
                    break;
                }
                default: {
                    putchar('%');
                    putchar(*format);
                    count += 2;
                    break;
                }
            }
        } else {
            putchar(*format);
            count++;
        }
        format++;
    }

<<<<<<< HEAD
	while (format && format[i])
	{
		if (format[i] == '%')
		{
			i++;

			if (format[i] == 'c')
				count += print_char(args);
			else if (format[i] == 's')
				count += print_string(args);
			else if (format[i] == '%')
				count += _putchar('%');
			else
			{
				count += _putchar('%');
				count += _putchar(format[i]);
			}
		}
		else
		{
			count += _putchar(format[i]);
		}
		i++;
	}

	va_end(args);
	return (count);
=======
    va_end(args);
    return count;
>>>>>>> refs/remotes/origin/main
}
