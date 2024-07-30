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
	int i = 0, count = 0;
	char *str;

	va_start(args, format);
	if (format == NULL)
		return (-1);

	while (format && format[i])
	{
		if (format[i] == '%')
		{
			i++;

			if (format[i] == 'c')
				count += _putchar(va_arg(args, int));
			else if (format[i] == 's')
			{
				str =va_arg(args, char *);
				if (str == NULL)
					str = "(null)";
				while (*str)
					count += _putchar(*str++);
			}
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
}

