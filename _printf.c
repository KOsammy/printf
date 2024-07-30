#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * _printf - This gives an output accroding to the format
 * @format: A character string with zero or more directives
 *
 * Return: the number of characters printed (excludung the null byte)
 */
int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;
	const char *p;

	va_start(args, format);
	for (p = format; *p != '\0'; p++)
	{
		if (*p == '%')
		{
			p++;
			if (*p == '\0')
				break;

			switch (*p)
			{
				case 'd':
					{
					int d = va_arg(args, int);
					print_int(d);
					count++;
					break;
					}
				case 'i':
					{
					int i = va_arg(args, int);
					print_integer(i);
					count++;
					break;
					}
				case 'c':
					{
					char c = (char) va_arg(args, int);
					print_char(c);
					count++;
					break;
					}
				case 's':
					{
					char *s = va_arg(args, char *);
					print_str(s);
					count++;
					break;
					}
				case 'b':
					{
					int b = va_arg(args, int);
					print_binary(b);
					count++;
					break;
					}
				case 'u':
					{
					int u = va_arg(args, int);
					print_unsigned(u);
					count++;
					break;
					}
				case 'o':
					{
					int o = va_arg(args, int);
					print_octal(o);
					count++;
					break;
					}
				case 'x':
					{
					int x = va_arg(args, int);
					print_lowerhexadecimal(x);
					count++;
					break;
					}
				case 'X':
					{
					int X = va_arg(args, int);
					print_upperhexadecimal(X);
					count++;
					break;
					}
				case '%':
					{
					putchar('%');
					count++;
					break;
					}
				default:
					{
					putchar('%');
					putchar(*p);
					count += 2;
					break;
					}
			}
		}
		else
		{
			putchar(*p);
			count++;
		}
	}
	va_end(args);
	return count;
}
